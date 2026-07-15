# C - argc, argv

## Description
This project explores the mechanics of command-line arguments in the C programming language. The core focus is to learn how to receive, validate, and manipulate inputs passed directly to a program from the shell during execution. It covers the structure and handling of `argc` (argument count) and `argv` (argument vector), as well as converting strings to numerical data types.

All functions are written strictly in compliance with the **Betty coding style**.

## 📝 Learning Objectives
* Understand what command-line arguments are and why they are useful.
* Learn how to use `argc` to track the number of arguments passed to a program.
* Learn how to access individual arguments through the array of strings `argv`.
* Understand how `argv[0]` holds the name of the program itself.
* Learn how to safely convert string inputs into numbers using functions like `atoi`.

## 🛠️ Requirements & Engineering Constraints
* **OS:** Ubuntu 20.04 LTS
* **Compiler:** `gcc` (Compilation flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`)
* **Coding Style:** 100% compliant with the Betty Style Guide (`betty-style.pl` and `betty-doc.pl`).
* **Unused Variables:** Any unused arguments must be explicitly handled (e.g., using `__attribute__((unused))` or casting to `void`) to avoid compilation warnings.

## 📁 File List & Tasks Directory

| File | Task Title | Description |
| :--- | :--- | :--- |
| `0-whatsmyname.c` | 0. It's my name | Prints the program's name, followed by a new line, even if it is renamed. |
| `1-args.c` | 1. Silence is argument carried out by other means | Prints the exact number of arguments passed into it, followed by a new line. |
| `2-args.c` | 2. The best argument against democracy is a five-minute conversation... | Prints all arguments the program receives, one per line. |
| `3-mul.c` | 3. mul | Multiplies two numbers received as arguments and prints the result. If the program does not receive exactly two arguments, it prints `Error` and returns `1`. |
| `4-add.c` | 4. To infinity and beyond | Adds positive numbers passed as arguments and prints the result. Prints `Error` and returns `1` if any argument contains symbols that are not digits. |

---

## 🚀 Compilation & Testing

To compile any of these programs, execute the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-mul.c -o mul