# C - Dynamic Analysis

## Description
This project focuses on **dynamic analysis** techniques in C programs. Unlike static analysis (which inspects source code without executing it), dynamic analysis examines the behavior of a program **during runtime**. The goal is to detect runtime bugs, pointer invalidations, buffer overflows, dynamic memory misuse, and performance bottlenecks using tools like **Valgrind**, **GDB**, and profiling utilities.

All source files comply strictly with the **Betty coding style**.

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
* **Coding Style:** 100% compliant with the Betty Style Guide (`betty-style.pl` and `betty-doc.pl`).

## 📁 File List & Tasks Directory

| File | Task Title | Description |
| :--- | :--- | :--- |
| `0-mem_leak.c` | 0. Memory Leaks Detection | Identifying and resolving unreleased dynamic memory blocks on the heap using Valgrind. |
| `1-invalid_read.c` | 1. Invalid Reads & Writes | Debugging out-of-bounds array access and dangling pointer dereferences. |
| `2-uninitialized.c` | 2. Uninitialized Memory Use | Tracking conditional jumps and memory operations relying on uninitialized variables. |
| `3-gdb_analysis.c` | 3. Runtime GDB Tracing | Analyzing program execution flow and crash dumps (Segmentation Faults) using GDB. |

---

## 🚀 Compilation & Dynamic Profiling

To enable debug symbols required for accurate dynamic analysis, always compile with the `-g` flag:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -g 0-mem_leak.c -o mem_leak
```

### 1. Memory Leak & Error Analysis with Valgrind
Run your compiled binary through Valgrind Memcheck to analyze heap usage and invalid operations:

```bash
valgrind --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes ./mem_leak
```

Expected output signature for leak-free execution:
> **All heap blocks were freed -- no leaks are possible**

### 2. Dynamic Debugging with GDB
To inspect runtime execution, analyze variables, and trace crashes:

```bash
gdb ./mem_leak
(gdb) run
(gdb) backtrace
```