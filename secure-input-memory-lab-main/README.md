# C - Secure Input & Memory Lab

## Description
This lab (student starter) contains **intentionally vulnerable C code** for analysis and patching. A small program reads a username from standard input, builds a session object around it, prints the session, and releases it. The exercise is to review the input handling and the ownership/lifetime of the dynamically allocated memory, find the weaknesses, and fix them.

## 📝 Learning Objectives
* Read user input safely into a heap buffer (bounded `scanf` width, return-value checks).
* Reason about **memory ownership**: who allocates and who must `free` the username and the session.
* Detect and fix leaks, dangling pointers and double frees.
* Check every allocation and propagate failures with proper cleanup.

## 🛠️ Requirements & Engineering Constraints
* **OS:** Ubuntu 20.04 LTS
* **Compiler:** `gcc` (Compilation flags: `-Wall -Werror -Wextra -pedantic -std=gnu89 -g`)
* **Tools:** `valgrind` to verify that no memory error or leak remains.
* **Sources:** All code lives under `src/`.

## 📁 File List & Tasks Directory

| File | Description |
| :--- | :--- |
| `src/main.c` | Entry point: prompts for a username, creates and prints a session, says goodbye, destroys the session. Returns `1` if reading or session creation fails. |
| `src/user_input.c` / `src/user_input.h` | `read_username()`: allocates a 50-byte buffer and reads a username (`scanf("%49s")`); returns `NULL` on failure. |
| `src/session.c` / `src/session.h` | `session_t` (`user`, `access_level`) with `session_create`, `session_print` and `session_destroy`. |
| `src/lab_program` | Compiled executable of the sources above. |

---

## 🚀 Compilation & Testing

```bash
cd src
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -g main.c session.c user_input.c -o lab_program
echo "alice" | ./lab_program
```

### Checking for Memory Errors
```bash
echo "alice" | valgrind --leak-check=full ./lab_program
```

---

## 👤 Author
* **Student:** [RebornLPB](https://github.com/RebornLPB)
* **GitHub:** [https://github.com/RebornLPB](https://github.com/RebornLPB)
* **School:** [Holberton School](https://www.holbertonschool.com/)
