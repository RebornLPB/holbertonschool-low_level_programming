# C - Dynamic Analysis

## Description
This project focuses on **dynamic analysis** techniques in C programs. Unlike static analysis (which inspects source code without executing it), dynamic analysis examines the behavior of a program **during runtime**. The goal is to detect runtime bugs, pointer invalidations, buffer overflows, dynamic memory misuse, and performance bottlenecks using tools like **Valgrind**, **GDB**, and profiling utilities.

## 📝 Learning Objectives
* Understand the core differences between static analysis and dynamic analysis.
* Learn how to use **Valgrind** (`memcheck`, `helgrind`, `callgrind`) to detect memory leaks, uninitialized memory reads, and invalid accesses.
* Master dynamic debugging with **GDB** (GNU Debugger) by setting breakpoints, inspecting registers, and tracing the call stack at runtime.
* Detect and diagnose dynamic memory issues on the Heap and Stack.
* Learn how to optimize software performance and memory usage based on dynamic profiling data.

## 🛠️ Requirements & Engineering Constraints
* **OS:** Ubuntu 20.04 LTS
* **Compiler:** `gcc` (Compilation flags: `-Wall -Werror -Wextra -pedantic -std=gnu89 -g`)
* **Debugging & Profiling Tools:** `valgrind`, `gdb`, `gprof`

## 📁 File List & Tasks Directory

| File | Type | Description |
| :--- | :--- | :--- |
| `source.c` | C Source Code | Program to analyse dynamically: reads a number from `stdin`, derives a key from it through several mixing/rotation functions (`mix32`, `rotl32`, `derive_key`, `compute_target`) and prints `OK` or `NO`. Analysed at runtime with GDB. |
| `source` | Binary | Compiled executable of `source.c`. |
| `gdb_fundamentals.txt` | Notes | Hexadecimal values noted down for the GDB fundamentals exercise. |
| `gdb_vsc.txt` | Notes | Hexadecimal values noted down for the GDB-in-VS-Code exercise. |

---

## 🚀 Compilation & Dynamic Profiling

To enable debug symbols required for accurate dynamic analysis, always compile with the `-g` flag:

```bash
gcc -Wall -Wextra -g source.c -o source
echo 12345 | ./source
```

### 1. Dynamic Debugging with GDB
To inspect runtime execution, analyze variables, and trace the call stack:

```bash
gdb ./source
(gdb) break validate
(gdb) run
(gdb) backtrace
(gdb) finish
```

### 2. Memory Analysis with Valgrind
Run the binary through Valgrind Memcheck to analyze heap usage and invalid operations:

```bash
echo 12345 | valgrind --tool=memcheck --leak-check=full --track-origins=yes ./source
```
