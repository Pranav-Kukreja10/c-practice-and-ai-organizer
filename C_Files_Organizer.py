import os
import re
import json
import shutil
import requests
import tkinter as tk
from tkinter import filedialog


# CONFIGURATION

MODEL_NAME      = "qwen3.5:9b"
OLLAMA_CHAT_URL = "http://localhost:11434/api/chat"

OUTPUT_FOLDER   = "_Organized"
UNSORTED_FOLDER = "_Unsorted"

SKIP_FOLDERS = {OUTPUT_FOLDER, UNSORTED_FOLDER}

DEBUG_RAW = False

# ANSI colours
RED    = "\033[91m"
GREEN  = "\033[92m"
YELLOW = "\033[93m"
CYAN   = "\033[96m"
DIM    = "\033[2m"
BOLD   = "\033[1m"
RESET  = "\033[0m"


# LLM INTERACTION

SYSTEM_PROMPT = """\
You are a C programming expert. Your ONLY job is to analyse C source code and \
return a single valid JSON object. You must NOT think out loud, reason, explain, \
or include any text outside the JSON object.

The JSON must have exactly these four keys:

{
  "topic_folder": "<one of: Arrays, Pointers, Strings, Matrix, Recursion, Functions, Sorting, LinkedList, Structures, FileIO, Misc>",
  "meaningful_filename": "<snake_case name, e.g. reverse_array — no extension, no numbers>",
  "top_comment_block": "<a multi-line C block comment. Must start with /* on its own line, end with */ on its own line, and contain at least 2-3 lines of description in between (e.g. what the program does, key approach/algorithm). Do NOT produce a single-line /* ... */ comment.>",
  "appended_main": "<empty string if main() already exists in the code; otherwise a complete compilable int main() with test cases>"
}

Output ONLY the JSON. First character must be {. Last character must be }. Nothing else."""


def call_ollama(source_code: str) -> dict:
    """
    Calls /api/chat with think=false to suppress Qwen3.5 reasoning entirely.
    Returns a parsed and validated dict.
    """
    payload = {
        "model": MODEL_NAME,
        "stream": False,
        "think": False,          
        "options": {
            "temperature": 0.1,
            "num_predict":  2048, 
            "top_k": 20,
            "top_p": 0.9,
        },
        "messages": [
            {
                "role": "system",
                "content": SYSTEM_PROMPT
            },
            {
                "role": "user",
                "content": (
                    "Analyse this C source code and return ONLY the JSON object:\n\n"
                    f"```c\n{source_code}\n```"
                )
            }
        ]
    }

    response = requests.post(OLLAMA_CHAT_URL, json=payload, timeout=180)
    response.raise_for_status()

    raw_text = response.json()["message"]["content"]

    if DEBUG_RAW:
        print(f"\n{DIM}--- RAW LLM RESPONSE ---\n{raw_text}\n--- END ---{RESET}\n")

    return parse_llm_json(raw_text)


def parse_llm_json(raw: str) -> dict:
    """
    Multi-strategy extractor. Even if the model leaks prose, we find the JSON.
      1. Strip any accidental <think>...</think> tags
      2. Pull out ```json ... ``` fences
      3. Find the outermost { ... } brace pair
      4. Last resort: parse as-is
    """
   
    cleaned = re.sub(r"<think>[\s\S]*?</think>", "", raw, flags=re.IGNORECASE).strip()

    if not cleaned:
        raise ValueError(
            f"LLM returned an empty response after cleaning.\n"
            f"First 500 chars of raw: {raw[:500]!r}"
        )

    fence = re.compile(r"```(?:json)?\s*([\s\S]*?)\s*```", re.IGNORECASE)
    m = fence.search(cleaned)
    if m:
        candidate = m.group(1).strip()
        try:
            return json.loads(candidate)
        except json.JSONDecodeError:
            pass

    start = cleaned.find("{")
    end   = cleaned.rfind("}")
    if start != -1 and end != -1 and end > start:
        candidate = cleaned[start:end + 1]
        try:
            return json.loads(candidate)
        except json.JSONDecodeError:
            pass
    return json.loads(cleaned)


def validate_response(data: dict) -> None:
    required = {"topic_folder", "meaningful_filename", "top_comment_block", "appended_main"}
    missing = required - data.keys()
    if missing:
        raise ValueError(f"LLM response missing keys: {missing}")
    for key in required:
        if not isinstance(data[key], str):
            raise ValueError(f"Key '{key}' must be a string, got {type(data[key])}: {data[key]!r}")


def ensure_multiline_comment(comment: str) -> str:
    """
    Guarantees the top comment block is a genuine multi-line /* ... */ block,
    not a single-line /* ... */ comment. If the model collapses it onto one
    line, we reformat it into multiple lines ourselves rather than trusting
    the LLM blindly.
    """
    comment = comment.strip()

    body = comment
    if body.startswith("/*"):
        body = body[2:]
    if body.endswith("*/"):
        body = body[:-2]
    body = body.strip()

    raw_lines = [ln.strip() for ln in body.splitlines() if ln.strip()]
    cleaned_lines = []
    for ln in raw_lines:
        if ln.startswith("*"):
            ln = ln[1:].strip()
        if ln:
            cleaned_lines.append(ln)

    if len(cleaned_lines) <= 1:
        single = cleaned_lines[0] if cleaned_lines else body
        sentence_parts = re.split(r"(?<=[.!?])\s+", single.strip())
        cleaned_lines = [s.strip() for s in sentence_parts if s.strip()]
        if not cleaned_lines:
            cleaned_lines = [single.strip()] if single.strip() else ["No description provided."]

    rebuilt = ["/*"]
    for ln in cleaned_lines:
        rebuilt.append(f" * {ln}")
    rebuilt.append(" */")
    return "\n".join(rebuilt)


# CORE PROCESSING

def assemble_output(top_comment: str, original_code: str, appended_main: str) -> str:
    parts = [top_comment.strip(), original_code.rstrip()]
    if appended_main.strip():
        parts.append(appended_main.strip())
    return "\n\n".join(parts) + "\n"


def resolve_unique_filename(dest_dir: str, base_name: str, extension: str = ".c") -> str:
    """
    Returns base_name + extension if that name doesn't already exist in
    dest_dir. Only if it collides do we start appending _01, _02, _03, ...
    until we find a free name.
    """
    candidate = f"{base_name}{extension}"
    if not os.path.exists(os.path.join(dest_dir, candidate)):
        return candidate

    counter = 1
    while True:
        candidate = f"{base_name}_{counter:02d}{extension}"
        if not os.path.exists(os.path.join(dest_dir, candidate)):
            return candidate
        counter += 1


def collect_c_files(root_dir: str) -> list:
    """
    Walks root_dir recursively and returns a list of (source_path, source_label)
    tuples for every .c file found, EXCLUDING anything inside SKIP_FOLDERS
    (so a second run never re-processes the script's own output).

    source_label is a short string like "Practice 3/50.c" used purely for
    nicer console logging — it doesn't affect where the file ends up.
    """
    c_files = []

    for dirpath, dirnames, filenames in os.walk(root_dir):
        dirnames[:] = [d for d in dirnames if d not in SKIP_FOLDERS]

        for fname in sorted(filenames):
            if fname.lower().endswith(".c"):
                full_path = os.path.join(dirpath, fname)
                rel_path  = os.path.relpath(full_path, root_dir)
                c_files.append((full_path, rel_path))

    c_files.sort(key=lambda item: item[1])
    return c_files


def process_directory(root_dir: str) -> None:
    c_files = collect_c_files(root_dir)

    total = len(c_files)
    if total == 0:
        print(f"{YELLOW}No .c files found anywhere under the selected root directory.{RESET}")
        return

    output_dir = os.path.join(root_dir, OUTPUT_FOLDER)
    os.makedirs(output_dir, exist_ok=True)

    print(f"\n{BOLD}{CYAN}Found {total} .c file(s) across all subfolders in:{RESET} {root_dir}")
    print(f"{BOLD}{CYAN}All sorted output will be written into:{RESET} {output_dir}\n")
    print("=" * 70)

    success_count = 0
    error_count   = 0

    for idx, (source_path, rel_label) in enumerate(c_files, start=1):
        print(f"{BOLD}[{idx}/{total}]{RESET} Processing {CYAN}{rel_label}{RESET}...", end=" ", flush=True)

        try:
            with open(source_path, "r", encoding="utf-8", errors="replace") as f:
                original_code = f.read()

            data = call_ollama(original_code)
            validate_response(data)

            topic_folder    = data["topic_folder"].strip()
            meaningful_name = data["meaningful_filename"].strip()
            top_comment     = ensure_multiline_comment(data["top_comment_block"])
            appended_main   = data["appended_main"].strip()

            
            dest_dir = os.path.join(output_dir, topic_folder)
            os.makedirs(dest_dir, exist_ok=True)

            new_filename = resolve_unique_filename(dest_dir, meaningful_name)
            dest_path    = os.path.join(dest_dir, new_filename)

            final_content = assemble_output(top_comment, original_code, appended_main)
            with open(dest_path, "w", encoding="utf-8") as out:
                out.write(final_content)

            print(f"{GREEN}Topic: {topic_folder}  →  {OUTPUT_FOLDER}/{topic_folder}/{new_filename}{RESET}")
            success_count += 1

        except requests.exceptions.ConnectionError:
            error_count += 1
            _handle_error(rel_label, source_path, output_dir,
                          "Ollama not reachable at http://localhost:11434 — is it running?")

        except requests.exceptions.Timeout:
            error_count += 1
            _handle_error(rel_label, source_path, output_dir,
                          "Request timed out — model too slow or overloaded.")

        except (json.JSONDecodeError, ValueError) as e:
            error_count += 1
            if not DEBUG_RAW:
                print(f"\n  {DIM}Tip: set DEBUG_RAW = True to see the raw LLM output.{RESET}")
            _handle_error(rel_label, source_path, output_dir,
                          f"JSON parse/validation error: {e}")

        except Exception as e:
            error_count += 1
            _handle_error(rel_label, source_path, output_dir,
                          f"{type(e).__name__}: {e}")

    print("\n" + "=" * 70)
    print(f"{BOLD}Done.{RESET}  "
          f"{GREEN}{success_count} succeeded{RESET}  |  "
          f"{RED}{error_count} failed → {OUTPUT_FOLDER}/{UNSORTED_FOLDER}/{RESET}")


def _handle_error(rel_label: str, source_path: str, output_dir: str, reason: str) -> None:
    print(f"{RED}ERROR{RESET}")
    print(f"  {RED}✗ {rel_label}: {reason}{RESET}")
    unsorted_dir = os.path.join(output_dir, UNSORTED_FOLDER)
    os.makedirs(unsorted_dir, exist_ok=True)

    base_filename = os.path.basename(source_path)
    dest_name = resolve_unique_filename(
        unsorted_dir,
        os.path.splitext(base_filename)[0],
    )
    dest = os.path.join(unsorted_dir, dest_name)
    if not os.path.exists(dest):
        shutil.copy2(source_path, dest)
    print(f"  {YELLOW}→ Copied to {OUTPUT_FOLDER}/{UNSORTED_FOLDER}/{dest_name}{RESET}")


# ENTRY POINT

def main():
    print(f"\n{BOLD}{CYAN}C Practice File Organizer{RESET}")
    print(f"Model : {YELLOW}{MODEL_NAME}{RESET}")
    print(f"API   : {OLLAMA_CHAT_URL}\n")

    root = tk.Tk()
    root.withdraw()
    root.attributes("-topmost", True)
    chosen_dir = filedialog.askdirectory(
        title="Select the ROOT folder containing your Practice 1, Practice 2, ... subfolders"
    )
    root.destroy()

    if not chosen_dir:
        print(f"{YELLOW}No directory selected. Exiting.{RESET}")
        return

    process_directory(chosen_dir)


if __name__ == "__main__":
    main()  
