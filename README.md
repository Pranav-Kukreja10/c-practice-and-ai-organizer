# C Practice & AI Organizer

My complete collection of C programming practice files that earned an 'O' (10/10) university grade, alongside a custom local-LLM orchestration script built to automatically document and categorize them.
## Background: The Path to an 'O' Grade

I wrote the hundreds of standalone C programs in this repository while rigorously preparing for my university C programming exams. This intensive, daily practice was instrumental in helping me master the language and ultimately secure an **'O' grade (10/10)** in the subject.

The codebase serves as a comprehensive portfolio of my coursework and personal practice, covering a wide variety of topics including:

* **Arrays & Strings:** Memory manipulation, traversal, and custom parsing functions.
* **Pointers:** Direct memory access, reference passing, and dynamic allocation.
* **Functions & Recursion:** Modular programming and recursive problem-solving.
* **Structures:** Custom data types and data grouping.

## Why I Built the AI Organizer

During the semester, my practice workspace devolved into a massive, disorganized directory of sequentially named files (e.g., `10.c`, `practice.c`, `test.c`). While the logic inside the files was valuable, finding specific algorithms or showcasing this work to reviewers was nearly impossible.

Instead of sorting 300+ files by hand to prepare this portfolio—which would have taken hours of mind-numbing data entry—I wanted an automated, scalable solution that would clean up the directory without risking the integrity of my original code.

## How It Works (The AI Orchestrator)

To solve this problem, I built a **Compound AI System**. Included in this repository is `C_Files_Organizer.py`, a Python orchestration script that safely reads the raw C code and passes it to a locally hosted Large Language Model (Qwen 3.5 9B via Ollama).

The LLM acts as an automated "AI Janitor." For every file, it determines the algorithmic topic, generates a meaningful snake_case filename, drafts a professional multi-line comment block, and appends test cases—all **without altering a single character of my original logic.**

### Key Technical Features of the Organizer

* **100% Offline & Private:** Uses local inference via Ollama. Zero source code is sent to the cloud.
* **Non-Destructive Execution:** Original code logic is strictly sandboxed. The script only appends documentation to the top and test cases to the bottom.
* **Smart Collision Handling:** Automatically detects duplicate filenames and safely appends version numbers (`_01`, `_02`) rather than overwriting data.
* **VRAM-Optimized Processing:** Processes files strictly sequentially (one-by-one) to maintain a tiny context window and prevent GPU memory spiking on consumer hardware.
* **Graceful Failures:** If the LLM hallucinates corrupt JSON or times out, the script catches the exception, safely moves the raw file to an `_Unsorted` directory, and continues the loop.

### Why Qwen 3.5 (9B)?

I specifically chose the Qwen 3.5 9-Billion parameter model for this pipeline based on pragmatic engineering decisions:

1. **Strict Constraint Adherence:** This Python pipeline relies entirely on the model returning perfectly formatted JSON without conversational markdown. Qwen 3.5 excels at following strict system prompts and constraints without hallucinating.
2. **Pre-existing Stack Integration:** I had already successfully utilized this model in previous local AI projects. Leveraging a proven, already-downloaded asset reduced friction and avoided unnecessary over-engineering.
3. **Hardware Sweet Spot:** At 9B parameters, the model fits comfortably within the VRAM of an RTX 4060. During execution, the script reliably processed, documented, and categorized **nearly 400 practice files in roughly half an hour**—automating what would have otherwise been days of manual, tedious documentation.

## Directory Transformation

**Before (My Raw Semester Workspace):**

```text
C_Practice/
├── 1.c
├── 2.c
├── 50.c
└── test_pointer.c

```

**After (This Repository):**

```text
C_Practice/
├── _Organized/
│   ├── Arrays/
│   │   └── array_reversal.c
│   ├── Pointers/
│   │   └── swap_values.c
│   ├── Strings/
│   │   ├── palindrome_check.c
│   │   └── palindrome_check_01.c
│   └── _Unsorted/  <-- (Failed LLM parses land safely here)

```

## Running the Organizer Tool Yourself

If you would like to test the Python automation script on your own directory of messy `.c` files, follow these steps:

### Prerequisites

1. **Install Ollama:** Download and install [Ollama](https://ollama.com/) to run local models.
2. **Pull the Model:** Open your terminal and pull the designated model:

```bash
   ollama pull qwen3.5:9b
   

```

3. **Install Python Dependencies:**

```bash
   pip install requests
   

```

*(Note: `tkinter` is used for the GUI folder selector. It comes pre-installed with Windows/macOS Python distributions. Linux users may need to run `sudo apt-get install python3-tk`).*

### Usage Instructions

1. **Start the Ollama Server:** Ensure Ollama is running in the background. (If not running as a service, type `ollama serve` in a terminal).
2. **Run the Script:**

```bash
   python C_Files_Organizer.py
   

```

3. **Select your Directory:** A native GUI window will pop up. Select the root folder containing your messy `.c` files.
4. **Watch the Pipeline:** The terminal will display a color-coded stream of the LLM processing your files in real-time.
5. **Review Output:** Navigate to the newly created `_Organized/` folder inside your selected directory to view the pristine, documented codebase.

### Configuration

You can tweak the script by modifying the constants at the top of `C_Files_Organizer.py`
* `MODEL_NAME`: Change this to `llama3:8b`, `mistral`, or any other local model you prefer.
* `DEBUG_RAW`: Set to `True` to print the raw, unparsed JSON output directly from the LLM for debugging.


Unorganized Directory:

<img width="667" height="877" alt="image" src="https://github.com/user-attachments/assets/17a9e8f3-0780-406e-b997-253e9d49a5a7" />

Organized Directory:

<img width="618" height="334" alt="image" src="https://github.com/user-attachments/assets/e0177b4c-b231-485a-8156-bf18015274ff" />

<img width="1046" height="244" alt="image" src="https://github.com/user-attachments/assets/1a717200-ee9e-43db-b044-485a9d4397af" />
