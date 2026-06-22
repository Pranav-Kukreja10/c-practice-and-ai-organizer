# c-practice-and-ai-organizer
My complete collection of C programming practice files that earned an 'O' (10/10) university grade, alongside a custom local-LLM orchestration script built to automatically document and categorize them.

# C Practice & AI Organizer

This repository contains a comprehensive portfolio of C programming coursework, demonstrating proficiency in core concepts like pointers, dynamic memory allocation, and string manipulation. Additionally, it features a personal AI-powered project designed to organize large directories, making it an excellent resource for both practical coding skills and automation workflows.

## Background: The Path to an 'O' Grade

I wrote this repository to serve as my semester portfolio for Data Structures and Algorithms. The codebase serves as a comprehensive portfolio of my coursework and personal practice, covering a wide variety of topics including:

*   Arrays & Strings: Reversal, palindrome checks, and unique character counting.
*   Pointers & Memory: Swapping values, reversing linked lists, and dynamic memory management.
*   Recursion & Sorting: Binary search, Bubble sort, Merge sort, and stack manipulation.
*   File I/O: Reading/processing files with proper memory handling.
*   Structures & Graphs: Managing student records and traversing linked lists.
*   Dynamic Memory: Efficient memory allocation/deallocation in complex scenarios.
*   Advanced Logic: Custom `memcpy`, `strcmp`, and stack-based solutions without library functions.
*   Practice Files: Over 50+ C practice files demonstrating consistent coding standards.

## Why I Built the AI Organizer

During the semester, I was overwhelmed by hundreds of `.c` files spread across folders, making it difficult to track progress. I built a simple Python tool using `Ollama` and `Qwen 3.5 9B` to automatically organize these files by type, name, and content logic. It categorizes messy directories, adds documentation, and keeps my workspace tidy—all 100% offline.

## How It Works (The AI Orchestrator)

To solve this problem, I built a custom Python script that integrates with the Ollama API. It runs a local `Qwen 3.5` model to analyze file contents and folder structures, then reorganizes files into logical subdirectories while documenting their purpose.

## Key Technical Features of the Organizer

1.  **100% Offline & Private:** Uses local inference via Ollama. Zero source code is sent to the cloud.
2.  **Non-Destructive Execution:** Always creates a `_Organized/` subfolder. Original files remain untouched.
3.  **Real-Time Visualization:** Runs a GUI to select the folder and displays the LLM output in the terminal.
4.  **Customizable:** Easily change the model or debugging output via constants in the script.

## Why Qwen 3.5 (9B)?

I specifically chose this model for its high accuracy in code understanding, strong ability to organize files logically, and excellent performance in local environments via Ollama, all without requiring GPU-intensive resources.

## Directory Transformation

### Before (My Raw Semester Workspace):

```c
C_Practice/
├── 1.c
├── 2.c
├── 50.c
└── test_pointer.c
```

### After (This Repository):

```c
C_Practice/
├── _Organized/
│   ├── Arrays/
│   │   └── array_reversal.c
│   ├── Pointers/
│   │   └── swap_values.c
│   ├── Strings/
│   │   ├── palindrome_check.c
│   │   └── palindrome_check_01.c
│   └── _Unsorted/ <-- (Failed LLM parses land safely here)
```

## Running the Organizer Tool Yourself

If you would like to run it yourself, please follow the detailed steps below.

### Prerequisites

Install Ollama: Download and install Ollama to run local models.
Pull the Model: Open your terminal and pull the designated model:

```bash
ollama pull qwen3.5:9b
```

Install Python Dependencies:

```bash
pip install requests
```

(Note: tkinter is used for the GUI folder selector. It comes pre-installed with Windows/macOS Python distributions. Linux users may need to run `sudo apt-get install python3-tk`.)

### Usage Instructions

1.  **Start the Ollama Server:** Ensure Ollama is running in the background. (If not running as a service, type `ollama serve` in a terminal).
2.  **Run the Script:**
    ```bash
    python c_organizer.py
    ```
3.  **Select your Directory:** A native GUI window will pop up. Select the root folder containing your messy .c files.
4.  **Watch the Pipeline:** The terminal will display a color-coded stream of the LLM processing your files in real-time.
5.  **Review Output:** Navigate to the newly created `_Organized/` folder inside your selected directory to view the pristine, documented codebase.

### Configuration

You can tweak the script by modifying the constants at the top of `c_organizer.py`:

```python
MODEL_NAME: Change this to llama3:8b, mistral, or any other local model you prefer.
DEBUG_RAW: Set to True to print the raw, unparsed JSON output directly from the LLM for debugging.
```
