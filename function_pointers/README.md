# C - Function Pointers

## Description
This project focuses on the implementation and mechanics of **function pointers** in the C programming language. The core objective is to understand how to store, pass, and invoke function memory addresses, allowing programs to execute code dynamically. Instead of relying on rigid `if-else` or `switch` evaluation blocks, this module introduces clean mapping techniques by passing functions as arguments and using arrays of structures to pick executable tasks at runtime.

All source files are developed to strictly pass the **Betty coding style** validation.

## 📝 Learning Objectives
* Understand what pointers to functions are and how to properly declare and use them.
* Learn how to pass a function as an argument to another function.
* Master the syntax of function pointer arrays and mapping structures.
* Understand what function pointers point to in the program's virtual memory layout.

## 🛠️ Requirements & Engineering Constraints
* **OS:** Ubuntu 20.04 LTS
* **Compiler:** `gcc` (Compilation flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`)
* **Coding Style:** 100% compliant with the Betty Style Guide (`betty-style.pl` and `betty-doc.pl`).

## 📁 File List & Tasks Directory

All standard prototypes used across basic modules are declared in the `function_pointers.h` header file.

| File | Task Title | Description |
| :--- | :--- | :--- |
| `0-print_name.c` | 0. What's my name | Writes a simple wrapper function that prints a name using a callback function pointer. |
| `1-array_iterator.c` | 1. To execute a function given as a parameter... | Iterates through an entire integer array, executing a passed functional parameter on each element. |
| `2-int_index.c` | 2. To seach for an integer | Searches for an integer inside an array using a comparison pointer tool. Returns the index of the first match. |
| `3-main.c`<br>`3-op_functions.c`<br>`3-get_op_func.c`<br>`3-calc.h` | 3. A goal is not always meant to be reached... | A modular command-line calculator that dynamically picks basic arithmetic operations (`+`, `-`, `*`, `/`, `%`) using an array of operation structures mapping strings to function pointers. |

---

## 🚀 Compilation & Testing

To compile a basic iterator or searching routine along with a standard test main template (e.g., `1-main.c` and `1-array_iterator.c`), execute:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-main.c 1-array_iterator.c -o 1-iter
./1-iter