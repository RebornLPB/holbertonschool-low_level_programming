# C - More malloc, free

## Description
This project built upon the fundamentals of dynamic memory management in C by introducing advanced allocation scenarios. The focus shifts toward handling safer allocation wrappers, replicating specialized standard library routines, managing larger memory chunks efficiently on the heap, and handling multi-pointer scaling safely while avoiding memory fragmentation.

All functions are written to pass the strict **Betty coding style** validation.

## 📝 Learning Objectives
* Understand how to implement custom allocation checkers to catch failures early.
* Learn how to use and replicate advanced memory allocation behaviors like `calloc`.
* Master pointer arithmetic coupled with custom memory boundaries.
* Deepen your understanding of dynamic boundary checks to systematically avoid Segmentation Faults.
* Continue utilizing **Valgrind** to guarantee 100% leak-free code profiles.

## 🛠️ Requirements & Engineering Constraints
* **OS:** Ubuntu 20.04 LTS
* **Compiler:** `gcc` (Compilation flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`)
* **Coding Style:** 100% compliant with the Betty Style Guide (`betty-style.pl` and `betty-doc.pl`).
* **Memory Safety:** Every script must be checked via Valgrind. Total cleanup is mandatory (`0 errors from 0 contexts`).

## 📁 File List & Tasks Directory

| File | Task Title | Description |
| :--- | :--- | :--- |
| `0-malloc_checked.c` | 0. Trust no one | Allocates memory using `malloc`. If it fails, the process terminates normally with a status value of `98`. |
| `1-string_nconcat.c` | 1. string_nconcat | Concatenates two strings up to `n` bytes of the second string into a newly allocated heap memory block. |
| `2-_calloc.c` | 2. _calloc | Allocates memory for an array of elements using `malloc` and initializes all allocated bytes to `0`. |
| `3-array_range.c` | 3. array_range | Creates an array of integers containing a sequential range of values from `min` to `max` (inclusive). |

---

## 🚀 Compilation & Testing

To compile your source files together with a designated test main template (e.g., `1-main.c` and `1-string_nconcat.c`), run:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-main.c 1-string_nconcat.c -o 1-string_nconcat
./1-string_nconcat