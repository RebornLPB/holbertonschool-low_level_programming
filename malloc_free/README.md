# C - Malloc, free

## Description
This project explores dynamic memory allocation within the Heap segment in C. The core objective is to understand how to request memory dynamically at runtime using `malloc`, how to safely manipulate pointers to avoid memory segment boundaries violations (Segmentation Faults), and how to efficiently release memory blocks using `free` to prevent resource leakage.

All functions are written to pass the strict **Betty coding style** validation.

## 📝 Learning Objectives
* Understand the difference between the Stack and the Heap memory zones.
* Learn how to use `malloc` to allocate memory dynamically.
* Master the rule of pairing every single `malloc` with a corresponding `free`.
* Understand why checking for `NULL` after an allocation is mandatory before dereferencing pointers.
* Learn how to use **Valgrind** to track down memory leaks and invalid memory accesses.

## 🛠️ Requirements & Engineering Constraints
* **OS:** Ubuntu 20.04 LTS
* **Compiler:** `gcc` (Compilation flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`)
* **Coding Style:** 100% compliant with the Betty Style Guide (`betty-style.pl` and `betty-doc.pl`).
* **Memory Safety:** 100% leak-free code. All binaries must pass Valgrind checks with zero leaks or tracking errors.

## 📁 File List & Tasks Directory

| File | Task Title | Description |
| :--- | :--- | :--- |
| `0-create_array.c` | 0. Float like a butterfly, sting like a bee | Creates an array of chars, and initializes it with a specific char. |
| `1-strdup.c` | 1. The woman who has no imagination... | Returns a pointer to a newly allocated space in memory containing a copy of the string given as parameter. |
| `2-str_concat.c` | 2. He who is not courageous enough... | Concatenates two strings into a newly dynamically allocated space in memory. |
| `3-alloc_grid.c` | 3. If you even dream of beating me... | Returns a pointer to a 2-dimensional array of integers initialized to 0. |
| `4-free_grid.c` | 4. It's not bragging if you can back it up | Frees a 2-dimensional grid previously created by your `alloc_grid` function. |

## 🚀 Compilation & Testing

To compile your functions with a test main file (e.g., `2-main.c` and `2-str_concat.c`), execute the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-main.c 2-str_concat.c -o 2-str_concat
./2-str_concat