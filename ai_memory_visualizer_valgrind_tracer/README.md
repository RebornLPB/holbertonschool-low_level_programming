# C - AI Memory Visualizer & Valgrind Tracer

## Description
This laboratory studies how a C program uses memory at runtime. Four small programs illustrate the **stack**, the **heap**, **pointer aliasing / use-after-free** and a deterministic **segmentation fault**. Their behaviour is visualized in written analyses, checked with **Valgrind**, and compared against explanations proposed by an AI assistant, which are reviewed critically (some are flawed, some are accurate).

## 📝 Learning Objectives
* Describe how stack frames are created and destroyed during recursion, and what a local variable's lifetime is.
* Understand heap ownership, and recognise a **definite memory leak**.
* Explain pointer aliasing and why reading or writing through a dangling pointer is a **use-after-free**.
* Trace a crash back to its root cause (a `NULL` dereference caused by a failed/zero-size allocation).
* Read Valgrind reports (`Invalid read/write`, `definitely lost`) and map them to the faulty code.
* Critically evaluate AI-generated explanations of memory errors.

## 🛠️ Requirements & Engineering Constraints
* **OS:** Ubuntu 20.04 LTS
* **Compiler:** `gcc` (flags `-Wall -Wextra -pedantic -std=gnu89 -g`, see `programs/Makefile`)
* **Tools:** `valgrind`, `gdb`
* **Note:** The programs contain **deliberate bugs** (leak, use-after-free, `NULL` dereference); `crash_example` is expected to crash.

## 📁 File List & Tasks Directory

### `programs/`

| File | Behaviour | Description |
| :--- | :--- | :--- |
| `stack_example.c` | Normal | Recursive `walk_stack` printing the addresses and values of locals in each frame on the way in and out. |
| `heap_example.c` | Memory leak | Allocates two `Person` structs with heap-allocated names; frees `bob` fully but only the struct of `alice`, leaking her `name`. |
| `aliasing_example.c` | Use-after-free | Two pointers (`a`, `b`) alias one heap array; after `free(a)`, `b` is read and written (dangling pointer). |
| `crash_example.c` | Segmentation fault | Requests an array of size 0, receives `NULL`, then writes to `nums[0]`. |
| `Makefile` | Build | Builds the four programs; provides `clean` and `re` targets. |

### `analysis/`

| File | Description |
| :--- | :--- |
| `memory_maps.md` | Memory behaviour analysis and visualizations for the stack, heap, aliasing and crash programs, plus a critical review of an incorrect AI hypothesis. |
| `valgrind_analysis.md` | Valgrind output and error classification for `heap_example` (definite leak) and `aliasing_example` (invalid read/write of size 4), with an evaluation of the AI's interpretation. |
| `crash_report.md` | Crash report for `crash_example`: causal chain, root cause, review of three AI proposals (speculative, partial, accurate) and a suggested fix. |

---

## 🚀 Build & Run

```bash
cd programs
make
./stack_example
./heap_example
./aliasing_example
./crash_example      # crashes on purpose
```

### Analysing with Valgrind
```bash
valgrind --leak-check=full ./heap_example
valgrind ./aliasing_example
```

---

## 👤 Author
* **Student:** [RebornLPB](https://github.com/RebornLPB)
* **GitHub:** [https://github.com/RebornLPB](https://github.com/RebornLPB)
* **School:** [Holberton School](https://www.holbertonschool.com/)
