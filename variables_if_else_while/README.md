# 0x01. C - Variables, if, else, while

This project deepens C programming logic by focusing on variable manipulation, conditional structures (`if`, `else`), and control loops (`while`). The goal is to master logical and relational operators and ASCII tables without using complex functions.

## 📝 Key Concepts

* **Complex conditions:** Implementing nested or chained decision structures.
* **Control loops:** Repeating instructions with `while` and managing increments.
* **ASCII table:** Direct manipulation of character integer values (e.g. `'a'` equals `97`) to perform arithmetic operations on letters.

## 🛠️ Specifications and Constraints

* **Style:** Strict adherence to the **Betty** style.
* **Allowed function:** Only `putchar` is allowed for output (no `printf`, `puts`, or any other standard library function unless explicitly allowed).
* **Limitation:** You can only use `putchar` a very limited number of times per file (often a maximum of 3 or 4 times depending on the exercise).

## 📁 File & Task List

| File | Objective | Description |
| :--- | :--- | :--- |
| `0-positive_or_negative.c` | Assignment & Condition | Assigns a random number to a variable and prints whether it is positive, negative, or zero. |
| `1-last_digit.c` | Modulo & Condition | Gets the last digit of a random number and applies a condition to its value. |
| `2-print_alphabet.c` | Loop & ASCII | Prints the alphabet in lowercase, followed by a new line. |
| `3-print_alphabets.c` | Loop & ASCII | Prints the alphabet in lowercase, then uppercase, followed by a new line. |
| `4-print_alphabt.c` | Condition in Loop | Prints the alphabet in lowercase excluding the letters `q` and `e`. |
| `5-print_numbers.c` | Loop | Prints all base 10 digits (0 to 9) followed by a new line. |
| `6-print_numberz.c` | Loop & ASCII | Prints all base 10 digits (0 to 9) using only `putchar` (without a `char` variable). |
| `7-print_tebahpla.c` | Reverse loop | Prints the alphabet in lowercase in reverse. |
| `8-print_base16.c` | Loop | Prints all base 16 digits (hexadecimal) in lowercase (0-9, a-f). |
| `9-print_comb.c` | Combinations | Prints all possible combinations of unique digits (0 to 9), separated by a comma and a space. |
| `100-print_comb3.c` | Advanced task | Prints all possible combinations of two different digits (e.g. `01` and `10` are considered the same, only `01` is printed). |
| `101-print_comb4.c` | Advanced task | Prints all possible combinations of three different digits. |
| `102-print_comb5.c` | Advanced task | Prints all possible combinations of two pairs of two digits (e.g. `00 01`, `00 02`...). |

## 🚀 Standard Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-print_alphabet.c -o alphabet
./alphabet