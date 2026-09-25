# C - Secure Data Handling

## Description
This project implements a small in-memory **session store**: a singly linked list of `session_t` records (id, user id, and a binary data buffer), each owned and managed through a `store_t`. It focuses on safe dynamic memory handling — every allocation failure path is checked, ownership is always clear (who is responsible for `free`-ing what), and the store is driven through a deterministic, line-based command interpreter for automated testing.

## 📝 Learning Objectives
* Design ownership-safe APIs where allocation failures always clean up any partial state.
* Implement a singly linked list (`node_t`) to store heap-allocated structs (`session_t`).
* Safely resize a buffer with `realloc` (`session_set_data`), including the zero-length edge case.
* Distinguish "extract and hand ownership to the caller" from "delete and free" in the same function (`store_delete`'s `out` parameter).
* Parse and dispatch line-based commands from `stdin` with `strtok`.

## 🛠️ Requirements & Engineering Constraints
* **OS:** Ubuntu 20.04 LTS
* **Compiler:** `gcc` (Compilation flags: `-std=gnu89 -Wall -Wextra -Werror -pedantic -g`, see `Makefile`)
* **Memory Management:** Every `malloc`/`realloc` is checked and matched by a `free`; verified with **Valgrind**.

## 📁 File List & Tasks Directory

| File | Description |
| :--- | :--- |
| `session.h` | `session_t` struct (id, uid, data buffer, data length) and its function prototypes. |
| `session.c` | `session_create`, `session_set_data` (safe `realloc`), and `session_destroy`. |
| `store.h` | `node_t`/`store_t` linked-list structs and store function prototypes. |
| `store.c` | `store_init`, `store_add` (rejects duplicate ids), `store_get`, `store_delete` (extract-or-destroy via `out`), `store_destroy`. |
| `main.c` | Deterministic command-driven CLI (`ADD`, `GET`, `SET`, `DEL`, `CLEAR`, `EXIT`) built on top of `store_t`, for scripted/automated testing. |
| `Makefile` | Builds the `secure_store` binary; also provides `clean` and `re` targets. |

---

## 🚀 Compilation & Usage

```bash
make
echo -e "ADD u1 42 hello\nGET u1\nEXIT" | ./secure_store
```

### Checking for Memory Leaks
```bash
echo -e "ADD u1 42 hello\nDEL u1\nEXIT" | valgrind --leak-check=full ./secure_store
```

### Cleaning Build Artifacts
```bash
make clean
```

---

## 👤 Author
* **Student:** [RebornLPB](https://github.com/RebornLPB)
* **GitHub:** [https://github.com/RebornLPB](https://github.com/RebornLPB)
* **School:** [Holberton School](https://www.holbertonschool.com/)
