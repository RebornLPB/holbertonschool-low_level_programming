# 0x02. C - Functions, nested loops

This repository is dedicated to learning functions in C and mastering the manipulation of nested loops. The objective is to understand how to modularize code and manage two-dimensional or repetitive algorithmic structures.

## 📝 Key Concepts

* **Function Prototypes:** Declaring functions within a header file (`main.h`) to enable their usage across multiple source files.
* **Nested Loops:** Utilizing loops inside other loops (e.g., nested `for` or `while` statements) to generate matrices, multiplication tables, or complex patterns.
* **Header Files (`main.h`):** Centralizing prototypes for all custom functions, including the native `_putchar` function.

## 🛠️ Specifications and Constraints

* **Coding Style:** Strict compliance with the **Betty** style guide.
* **Allowed Functions:** Only the `_putchar` function is allowed for standard output (using `printf`, `puts`, etc., is forbidden unless specified otherwise).
* **Test Files:** Main tester files provided by the school (e.g., `0-main.c`) must not be pushed to the remote repository.

## 📁 File List & Tasks

| File | Function / Objective | Description |
| :--- | :--- | :--- |
| `_putchar.c` | `int _putchar(char c)` | Writes the character `c` to the standard output. |
| `0-putchar.c` | `main` | Program that prints `_putchar`, followed by a new line. |
| `1-alphabet.c` | `void print_alphabet(void)` | Prints the alphabet in lowercase, followed by a new line. |
| `2-print_alphabet_x10.c` | `void print_alphabet_x10(void)` | Prints the lowercase alphabet 10 times using nested loops. |
| `3-islower.c` | `int _islower(int c)` | Checks for a lowercase character (returns `1` if true, `0` otherwise). |
| `4-isalpha.c` | `int _isalpha(int c)` | Checks for an alphabetic character (both lowercase and uppercase). |
| `5-sign.c` | `int print_sign(int n)` | Prints the sign of a number (`+`, `0`, `-`) and returns its polarity value. |
| `6-abs.c` | `int _abs(int)` | Computes the absolute value of an integer. |
| `7-print_last_digit.c` | `int print_last_digit(int)` | Prints and returns the last digit of a number. |
| `8-24_hours.c` | `void jack_bauer(void)` | Prints every minute of the day from 00:00 to 23:59. |
| `9-times_table.c` | `void times_table(void)` | Prints the 9 times table, starting with 0, formatted with commas and spaces. |
| `10-add.c` | `int add(int, int)` | Adds two integers and returns the result. |
| `11-print_to_98.c` | `void print_to_98(int n)` | Prints all natural numbers from `n` to `98`, separated by commas. |

## 🚀 Compilation

Standard compilation example for this module:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 0-putchar.c -o 0-putchar
./0-putchar