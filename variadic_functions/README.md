# C - Variadic Functions

## Description
This project focuses on **variadic functions** in the C programming language. The core objective is to learn how to write and use functions that can take a variable number of arguments. By using the standard library macros defined in `<stdarg.h>`, this module teaches how to retrieve arguments dynamically, traverse lists of varying lengths, and implement clean fallback structures for diverse inputs (such as numbers, characters, and strings).

All source files are developed to strictly pass the **Betty coding style** validation.

## 📝 Learning Objectives
* Understand what variadic functions are and how to identify when to use them.
* Learn how to use the `<stdarg.h>` standard library macros: `va_start`, `va_arg`, `va_end`, and `va_list`.
* Understand how the compiler handles promotional rules for arguments passed to variadic functions.
* Learn to design robust input-traversal loops to print or manipulate arbitrary counts of formatted data.

## 🛠️ Requirements & Engineering Constraints
* **OS:** Ubuntu 20.04 LTS
* **Compiler:** `gcc` (Compilation flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`)
* **Coding Style:** 100% compliant with the Betty Style Guide (`betty-style.pl` and `betty-doc.pl`).
* **Header Files:** Allowed to use the standard library via `#include <stdarg.h>`.

## 📁 File List & Tasks Directory

All standard prototypes used across this module are declared in the `variadic_functions.h` header file.

| File | Task Title | Description |
| :--- | :--- | :--- |
| `0-sum_them_all.c` | 0. Beauty is variable, ugliness is constant | Returns the sum of all its parameters. If the count parameter `n` is `0`, returns `0`. |
| `1-print_numbers.c` | 1. To be is to be the value of a variable | Prints numbers, followed by a new line, using a specified string separator between them. |
| `2-print_strings.c` | 2. One woman's constant is another man's variable | Prints strings, followed by a new line. If a string is `NULL`, prints `(nil)` instead. |
| `3-print_all.c` | 3. To be is a to be the value of a variable | Advanced task: Prints anything based on a format string containing characters representing types (`c` for char, `i` for integer, `f` for float, `s` for char*). |

---

## 🚀 Compilation & Testing

To compile a variadic printing routine along with a standard test main template (e.g., `2-main.c` and `2-print_strings.c`), execute the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-main.c 2-print_strings.c -o 2-print_strings
./2-print_strings