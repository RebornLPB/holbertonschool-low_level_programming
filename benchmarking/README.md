# Green Tech Efficiency & Benchmarking Lab

## Description
This lab is dedicated to **Green Computing** and low-level software optimization. The primary objective is to measure, analyze, and optimize the execution metrics, clock cycles, and resource consumption of C algorithms. By profiling baseline loops, implementing direct code instrumentation, and evaluating alternative algorithmic designs, this project bridges the gap between hardware power draw and high-performance, eco-efficient software engineering.

All source code and documentation comply with **Holberton School** standards and the strict **Betty coding style**.

## 📝 Learning Objectives
* **Algorithmic Carbon Footprint:** Understand how CPU instruction counts and execution latency directly translate into energy consumption.
* **Code Instrumentation:** Learn how to manually inject telemetry and performance-tracking hooks inside C source code.
* **Micro-Benchmarking:** Measure precise execution deltas, loop overheads, and hardware efficiency indicators.
* **Eco-Design Refactoring:** Compare standard structures against optimized algorithms to minimize computational waste.

## 🛠️ Requirements & Engineering Constraints
* **OS:** Ubuntu 20.04 LTS
* **Compiler:** `gcc` (Compilation flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`)
* **Coding Style:** Strict compliance with the Betty Style Guide (`betty-style.pl` and `betty-doc.pl`) for all C source files.
* **Documentation:** Analysis reports are formatted in Markdown with structured data and metrics tables.

## 📁 Project Structure & Deliverables

| File | Type | Description / Focus |
| :--- | :--- | :--- |
| `baseline_loop-metrics.md` | Markdown Report | Analysis of standard loop structures, documenting baseline execution times, CPU cycle overheads, and initialization metrics. |
| `comparison_algorithms-metrics.md` | Markdown Report | Comparative benchmark matrix contrasting different algorithmic implementations regarding space/time complexity and energy draw. |
| `instrumentation_lab.c` | C Source Code | Core laboratory file containing C routines equipped with custom instrumentation hooks to track high-resolution performance data. |
| `green_efficiency_analysis.md` | Markdown Report | Final synthesis report compiling eco-efficiency conclusions, optimization recommendations, and Green IT takeaways. |

## 🚀 Compilation & Testing

To compile the instrumented C laboratory file along with its headers and main routine, execute:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c instrumentation_lab.c -o dynamic_bench