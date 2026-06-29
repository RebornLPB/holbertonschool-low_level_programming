# C - Simple Calculator

## Description
This project implements a simple command-line calculator in C using a single unified source file. The objective is to handle basic arithmetic operations by processing command-line arguments (`argc` and `argv`) and implementing clean error handling for safe execution.

All code is written strictly in compliance with the **Betty coding style**.

## 📝 Learning Objectives
* Process and validate input arguments directly from the command line (`argv`).
* Implement basic arithmetic logic in C.
* Manage runtime error handling (invalid arguments, division by zero).

## 🛠️ Requirements & Constraints
* **OS:** Ubuntu 20.04 LTS
* **Compiler:** `gcc` (Compilation flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`)
* **Coding Style:** Strict adherence to the Betty Style Guide (`betty-style.pl` and `betty-doc.pl`).

## 📁 File Structure

| File | Type | Description |
| :--- | :--- | :--- |
| `calculator.c` | C Source Code | Contains the main logic, argument parsing, error checks, and arithmetic functions. |

## 🚀 Compilation & Usage

To compile the calculator, run the following standard command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calc