Advanced C – Homework (Fall 2025)

This folder contains homework assignments for Advanced C & Systems Programming.
Each assignment corresponds to lecture notes, with CMake used for building and testing.

📂 Assignments
🔹 Error Handling – Sept. 10, 2025

File: src/errorHandler.c

Introduces runtime error handling in C.

Uses assertions to validate assumptions (e.g., non-null pointers, valid sizes).

Demonstrates safe handling of runtime errors like division by zero with errno and error codes.

Focus: robustness, clear failure messages, and avoiding crashes.

🔹 Unit Testing – Sept. 25, 2025

Files:

src/name_length.c, src/main.c

include/name_length.h

tests/test_name_length.c with third_party/utest.h

Implements a simple library (name_length) and validates it using unit tests with the utest.h framework and CTest integration.

Learn how to structure tests in C.

Practice writing assertions and running tests automatically with ctest.

🔹 Pointers & Memory Management – Sept. 23–24, 2025

Files: pointers_1.c, pointersQuestions.c

Covers pointer basics, pointer-to-pointer, and NULL safety.

Demonstrates passing by value vs passing by pointer.

Introduces stack vs heap allocation and the importance of freeing heap memory.

Focus on manual memory management and avoiding memory leaks.

🔹 Structs & Unions – Sept. 29, 2025

Files: (to be added in upcoming homework)

Learn how to group multiple fields into a struct.

Explore pointers to structs, and how they are used in C libraries.

Understand memory layout, padding, and alignment.

Introduction to unions for memory sharing.

Focus: data organization and memory efficiency in C.