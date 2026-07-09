# C - Recursion

## Description
This project focuses on understanding and implementing **recursion** in the C programming language. The goal is to learn how to solve complex programming problems by allowing functions to call themselves repeatedly, breaking tasks down into smaller sub-problems until a specific base case is met. This module emphasizes thinking without loops (`for`, `while`) and mastering stack frame behaviors.

All functions are written strictly in compliance with the **Betty coding style**.

## 📝 Learning Objectives
* Understand what recursion is and how to use it.
* Learn how to identify and implement the mandatory **base case** to prevent infinite loops.
* Understand the concept of the **Call Stack** and how memory frames are allocated during recursive calls.
* Learn when to choose a recursive solution over an iterative loop.

## 🛠️ Requirements & Engineering Constraints
* **OS:** Ubuntu 20.04 LTS
* **Compiler:** `gcc` (Compilation flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`)
* **Coding Style:** 100% compliant with the Betty Style Guide (`betty-style.pl` and `betty-doc.pl`).
* **Restrictions:** Loops (`for`, `while`, `do-while`) are completely forbidden. You are allowed to use `_putchar`.

## 📁 File List & Tasks Directory

All custom function prototypes are declared in the `main.h` header file.

| File | Task Title | Description |
| :--- | :--- | :--- |
| `0-puts_recursion.c` | 0. She locked away a secret, deep inside... | Prints a string, followed by a new line, using recursion. |
| `1-print_rev_recursion.c` | 1. Why is it so important to dream? | Prints a string in reverse using recursion. |
| `2-strlen_recursion.c` | 2. Dreams feel real while we're in them | Returns the exact length of a string using recursion. |
| `3-factorial.c` | 3. You mustn't be afraid to dream a little... | Returns the factorial of a given number. Returns `-1` if the number is lower than 0. |
| `4-pow_recursion.c` | 4. Once an idea has taken hold of the brain... | Returns the value of $x$ raised to the power of $y$. Returns `-1` if $y$ is lower than 0. |
| `5-sqrt_recursion.c` | 5. Your subconscious is looking for the dreamer | Returns the natural square root of a number. Returns `-1` if the number does not have a natural square root. |
| `6-is_prime_number.c` | 6. Inception. Is it possible? | Returns `1` if the input integer is a prime number, otherwise returns `0`. |

---

## 🚀 Compilation & Testing

To compile a specific recursive routine along with its standard test main file (e.g., `3-main.c` and `3-factorial.c`), execute the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 3-main.c 3-factorial.c -o 3-factorial
./3-factorial