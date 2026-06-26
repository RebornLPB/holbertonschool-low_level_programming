# C - More functions, more nested loops

## Description
This project focuses on deepening my understanding of functions and nested loops in the C programming language. It covers fundamental concepts such as function prototypes, loops within loops, and using standard library functions like `_putchar`. All code is written strictly in compliance with the Betty coding style.

## Learning Objectives
* Learn how to use nested loops effectively.
* Understand what functions are and how to use them.
* Know the difference between a function declaration (prototype) and a definition.
* Understand the scope of variables.

## Requirements
* **OS:** Ubuntu 20.04 LTS
* **Compiler:** `gcc` (with flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`)
* **Coding Style:** Betty style compliant (both `betty-style.pl` and `betty-doc.pl`)
* **Allowed Functions:** Only `_putchar` is allowed unless specified otherwise.

## Prototypes Summary
All function prototypes used across this project are declared in the `main.h` header file:

| Prototype | Description |
| --- | --- |
| `int _isupper(int c);` | Checks for uppercase character. |
| `int _isdigit(int c);` | Checks for a digit (`0` through `9`). |
| `int mul(int a, int b);` | Multiplies two integers. |
| `void print_numbers(void);` | Prints the numbers from `0` to `9`. |
| `void print_most_numbers(void);` | Prints the numbers from `0` to `9` (excluding `2` and `4`). |
| `void more_numbers(void);` | Prints 10 times the numbers from `0` to `14`. |
| `void print_line(int n);` | Draws a straight line in the terminal. |
| `void print_diagonal(int n);` | Draws a diagonal line in the terminal. |
| `void print_square(int size);` | Prints a square followed by a new line. |
| `void print_triangle(int size);` | Prints a triangle followed by a new line. |

## Tasks File Directory

| File | Description |
| --- | --- |
| `0-isupper.c` | Function that checks for uppercase character. |
| `1-isdigit.c` | Function that checks for a digit (`0` through `9`). |
| `2-mul.c` | Function that multiplies two integers. |
| `3-print_numbers.c` | Function that prints the numbers, from `0` to `9`. |
| `4-print_most_numbers.c` | Function that prints the numbers from `0` to `9` except `2` and `4`. |
| `5-more_numbers.c` | Function that prints 10 times the numbers, from `0` to `14`. |
| `6-print_line.c` | Function that draws a straight line in the terminal. |
| `7-print_diagonal.c` | Function that draws a diagonal line on the terminal. |
| `8-print_square.c` | Function that prints a square. |
| `9-fizz_buzz.c` | C program that prints the numbers from `1` to `100` (FizzBuzz challenge). |
| `10-print_triangle.c` | Function that prints a triangle. |

## Compilation & Usage
To compile any given task file along with its main tester file (e.g., `0-main.c`), run:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-isupper.c _putchar.c -o 0-isupper
./0-isupper