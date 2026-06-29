# C - Pointers, arrays and strings

## Description
This project focuses on understanding and manipulating pointers, arrays, and strings within the C programming language. It covers memory addressing, call-by-reference operations, array index traversal, and buffer handling for string operations. All functions are developed to strictly comply with the Betty coding style.

## Learning Objectives
* Understand what pointers are and how to use them.
* Learn the differences between function parameters and arguments.
* Understand call by value versus call by reference.
* Master array manipulation and pointer arithmetic.
* Understand what strings are and how to safely handle string buffers.

## Requirements
* **OS:** Ubuntu 20.04 LTS
* **Compiler:** `gcc` (Flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`)
* **Coding Style:** Strict compliance with the Betty Style Guide (`betty-style.pl` and `betty-doc.pl`).

## Prototypes Summary
All custom function prototypes used throughout this project are declared in the `main.h` header file:

| Prototype | Description |
| --- | --- |
| `void reset_to_98(int *n);` | Updates the value an `int` pointer points to to `98`. |
| `void swap_int(int *a, int *b);` | Swaps the values of two integers using pointers. |
| `int _strlen(char *s);` | Returns the length of a string. |
| `void _puts(char *str);` | Prints a string, followed by a new line, to `stdout`. |
| `void print_rev(char *s);` | Prints a string in reverse, followed by a new line. |
| `void rev_string(char *s);` | Reverses a string in-place. |
| `void puts2(char *str);` | Prints every other character of a string, starting with the first one. |
| `void puts_half(char *str);` | Prints the second half of a string, followed by a new line. |
| `void print_array(int *a, int n);` | Prints `n` elements of an array of integers. |
| `char *_strcpy(char *dest, char *src);` | Copies the string pointed to by `src` into the `dest` buffer. |
| `int _atoi(char *s);` | Converts a string representation of an integer to an actual `int`. |

## 📁 File List & Tasks Directory

| File | Task Title | Description |
| :--- | :--- | :--- |
| `0-reset_to_98.c` | 0. 98 Battery st. | Modifies an integer value via its memory address to set it to 98. |
| `1-swap.c` | 1. Don't swap horses... | Takes two pointers to integers and swaps their respective values. |
| `2-strlen.c` | 2. This report, by its very length... | Computes and returns the exact length of a targeted string buffer. |
| `3-puts.c` | 3. I do not fear computers... | Outputs a whole string to standard output (`stdout`) followed by a newline. |
| `4-print_rev.c` | 4. I can only go one way... | Reads a string and prints its characters backwards in the terminal. |
| `5-rev_string.c` | 5. A good engineer thinks... | Directly reverses the character arrangement inside the memory of a string. |
| `6-puts2.c` | 6. Half the lies they tell... | Iterates through a string printing only even-indexed characters. |
| `7-puts_half.c` | 7. Winning is only half of it... | Extracts and outputs the second half of a string sequence. |
| `8-print_array.c` | 8. Arrays are not pointers | Prints a comma-and-space separated list of elements from an integer array. |
| `9-strcpy.c` | 9. strcpy | Emulates the native `strcpy` behavior including the terminating null byte (`\0`). |
| `100-atoi.c` | 10. Great leaders are willing... | Advanced task: Parses strings to extract numbers, taking signs into account. |

## 🚀 Compilation & Testing
To compile a specific routine along with its standard test main block (e.g., `1-main.c` and `1-swap.c`), run:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-swap.c -o 1-swap
./1-swap