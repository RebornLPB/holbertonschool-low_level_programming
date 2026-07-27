# Holberton School - Low-Level Programming & Algorithmics

## 📖 About
This repository contains all the projects and assignments completed during the **Low-Level Programming & Algorithmics** curriculum at **Holberton School**. 

The main objective of this track is to understand what happens under the hood of computers by learning C, Linux system programming, memory management, data structures, and computer architecture.

---

## 🛠️ General Requirements & Environment
* **OS:** Ubuntu 20.04 LTS
* **Compiler:** `gcc`
* **Flags:** `-Wall -Werror -Wextra -pedantic -std=gnu89`
* **Coding Style:** All C source files strictly comply with the [Betty Coding Style Guide](https://github.com/holbertonschool/Betty).
* **Memory Management:** Memory leaks and invalid operations are verified using **Valgrind**.

---

## 📚 Project Overview

| Directory | Core Concepts / Highlights | Key Files & Functions |
| :--- | :--- | :--- |
| **`hello_world`** | C compilation pipeline (`cpp`, `gcc`, `as`, `ld`), `puts`, `printf` | `0-preprocessor`, `4-puts.c`, `5-printf.c` |
| **`variables_if_else_while`** | Control flow, arithmetic & logical operators, loops | `0-positive_or_negative.c`, `1-last_digit.c` |
| **`functions_nested_loops`** | Functions, headers, variable scopes, nested loops | `_putchar`, `print_alphabet`, `print_times_table` |
| **`more_functions_nested_loops`** | Character classification, numbers, math algorithms | `_isupper`, `_isdigit`, `mul`, `print_line` |
| **`intro_debugging`** | Isolating logic errors, handling edge cases, infinite loops | `0-main.c`, `2-largest_number.c`, `3-leap_year.c` |
| **`pointers_arrays_strings`** | Pointers, arrays, memory addresses, string manipulation | `reset_to_98`, `_strlen`, `_strcpy`, `_memset`, `_strchr` |
| **`recursion`** | Base cases, call stack memory, recursive operations | `_puts_recursion`, `_factorial`, `_pow_recursion` |
| **`argc_argv`** | Command-line parameters, string-to-number conversion | `0-whatsmyname`, `3-mul.c`, `4-add.c` |
| **`malloc_free`** | Dynamic memory allocation, heap inspection, freeing blocks | `create_array`, `_strdup`, `str_concat`, `alloc_grid` |
| **`more_malloc_free`** | Advanced heap allocation, `realloc`, `calloc`, exit status | `malloc_checked`, `string_nconcat`, `_calloc` |
| **`function_pointers`** | Dynamic dispatch, function callbacks, mapping structures | `array_iterator`, `int_index`, `3-calc.c` |
| **`variadic_functions`** | Variable arguments using `<stdarg.h>` (`va_list`, `va_arg`) | `sum_them_all`, `print_numbers`, `print_all` |
| **`_printf`** *(Team Project)* | Custom implementation of `printf` formatted output | `_printf.c`, specifiers lookup, buffer handling |
| **`singly_linked_lists`** | Dynamic data structures, node insertion, list traversal | `print_list`, `add_node`, `add_node_end`, `free_list` |
| **`doubly_linked_lists`** | Bidirectional traversal (`prev`/`next`), node deletions | `print_dlistint`, `add_dnodeint`, `delete_dnodeint` |
| **`hash_tables`** | Key-value pairs, DJB2 algorithm, collision chaining | `hash_table_create`, `hash_table_set`, `hash_table_get` |
| **`dynamic_analysis`** | Dynamic profiling, runtime bug detection, memory inspection | Valgrind, GDB breakpoints, runtime tracing |

---

## 🚀 Quick Start & Compilation Example

To clone this repository and test a specific module:

```bash
# Clone repository
git clone [https://github.com/RebornLPB/holbertonschool-low_level_programming.git](https://github.com/RebornLPB/holbertonschool-low_level_programming.git)
cd holbertonschool-low_level_programming

# Navigate to a specific project directory
cd pointers_arrays_strings

# Compile using Holberton compilation flags
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-main.c 1-swap.c -o 1-swap
./1-swap
```

### Checking Betty Style
To ensure code cleanliness across any project:

```bash
betty *.c *.h
```

---

## 👤 Author
* **Student:** RebornLPB
* **GitHub:** [RebornLPB](https://github.com/RebornLPB)
* **School:** [Holberton School](https://www.holbertonschool.com/)