# C - Pointers, arrays and strings

## Description
This project covers foundational concepts in C programming regarding memory addresses, pointer arithmetic, array manipulation, and string handling. It explores how pointers reference variables, how strings are stored in contiguous memory blocks terminated by a null byte (`\0`), and how standard C library functions (like `strcpy`, `strcat`, `strchr`, `memset`, `memcpy`) operate under the hood.

All source code is written to strictly comply with the **Betty coding style**.

## 📝 Learning Objectives
* Understand what pointers are, how to declare them, and how to dereference memory addresses.
* Learn the intimate relationship between pointers, arrays, and string literals in C.
* Master pointer arithmetic and character array iterations without using array indexing where required.
* Learn how to manipulate multi-dimensional arrays (such as 2D chessboards and matrix diagonals).
* Replicate standard standard C string operations safely.

## 🛠️ Requirements & Engineering Constraints
* **OS:** Ubuntu 20.04 LTS
* **Compiler:** `gcc` (Compilation flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`)
* **Coding Style:** 100% compliant with the Betty Style Guide (`betty-style.pl` and `betty-doc.pl`).
* **Header File:** All function prototypes must be declared in the `main.h` header file.

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
| `0-memset.c` | memset | Fills memory with a constant byte. |
| `1-memcpy.c` | memcpy | Copies memory area from source to destination. |
| `2-strchr.c` | strchr | Locates a character in a string. |
| `3-strspn.c` | strspn | Gets the length of a prefix substring. |
| `4-strpbrk.c` | strpbrk | Searches a string for any of a set of bytes. |
| `5-strstr.c` | strstr | Locates a substring within a string. |
| `0-strcat.c` | strcat | Concatenates two strings together. |
| `1-strncat.c` | strncat | Concatenates two strings using at most `n` bytes from `src`. |
| `2-strncpy.c` | strncpy | Copies a string up to `n` bytes. |
| `3-strcmp.c` | strcmp | Compares two strings. |
| `4-rev_array.c` | reverse array | Reverses the content of an array of integers. |
| `5-string_toupper.c` | string toupper | Changes all lowercase letters of a string to uppercase. |
| `6-cap_string.c` | cap string | Capitalizes all words of a string. |
| `7-leet.c` | leet | Encodes a string into 1337 (Leet Speak). |
| `7-print_chessboard.c` | print chessboard | Prints an 8x8 chessboard 2D array. |
| `8-print_diagsums.c` | print diagsums | Prints the sum of the two diagonals of a square matrix of integers. |

---

## 🚀 Compilation & Testing

To compile a specific routine along with its standard test main block (e.g., `1-main.c` and `1-swap.c`), run:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-main.c 1-swap.c -o 1-swap
./1-swap
```