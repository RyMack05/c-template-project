Perfect 👍 I’ll combine your uploaded notes (each lesson/assignment has a date) with what you showed in your repo (`errorHandler.c`, `pointers_1.c`, `pointersQuestions.c`, plus unit testing) into a **short, clear `README.md`** for your `advancedC/homeWork/` folder.

Here’s a draft you can drop in as `advancedC/homeWork/README.md`:

---

# Advanced C – Homework Assignments

This folder contains homework assignments for **Advanced C (Fall 2025)**.
Each assignment corresponds to lecture notes and has been structured with CMake for easy build and testing.

---

## 📂 Assignments

### 🔹 Error Handling – *September 10, 2025*

**File:** `src/errorHandler.c`

* Demonstrates runtime error handling using **assertions** and **errno**.
* Example: catching division by zero and failing gracefully.

---

### 🔹 Unit Testing – *September 11, 2025*

**Files:**

* `src/name_length.c`, `src/main.c`
* `tests/test_name_length.c` (with `third_party/utest.h`)
* `include/name_length.h`

Implements a small library (`name_length`) and validates it with **unit tests** using `utest.h` and **CTest**.

---

### 🔹 Pointers Exercises – *September 23–24, 2025*

**Files:** `pointers_1.c`, `pointersQuestions.c`

* Practice with **pointers, pointer arithmetic, null pointers, passing by value/pointer**, and memory safety.
* Based on lessons on pointers and memory management.

---

## ⚙️ Build & Run

From the `homeWork/` root:

```bash
conda activate myenv
cmake -B build
cmake --build build
```

Run executables:

```bash
./build/src/errorHandler          # Error handling assignment
./build/src/main                  # Unit testing assignment (name_length)
./build/pointers_1                # Pointers exercise 1
./build/pointersQuestions         # Pointers exercise 2
```

Run tests:

```bash
ctest --test-dir build -V
```

---

## 📝 Notes

Assignments are based on the following lecture notes:

* **Error Handling** – Sept 10, 2025
* **Error Handling II: Unit Testing** – Sept 11, 2025
* **Pointers** – Sept 23–24, 2025
* **Structs & Unions** – Sept 25, 2025 *(upcoming)*

---

Would you like me to also add a **section for “Upcoming Assignments”** (like *Structs & Unions – Sept 25, 2025*) so your professor sees what’s planned but not done yet?
