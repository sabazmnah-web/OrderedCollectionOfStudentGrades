# Ordered Collection Implementation in C++

A comprehensive implementation of an array-based **Ordered Collection** Abstract Data Type (ADT) created for a data structures laboratory assessment. Elements within this collection are strictly maintained in **ascending order** upon insertion and looked up using optimized search mechanics.

---

## 📂 Project Architecture

The codebase follows standard object-oriented design and is divided into modular segments:

* **`orderedcollection.h`** – Defines the template class interface for the collection (`AddElement`, `RemoveElement`, `FindElement`, etc.) along with its tracking states.
* **`orderedcollection.cpp`** – Implements the underlying ordered insertion algorithms, downward memory shifting for deletion, and binary search for dynamic retrieval.
* **`score.h`** & **`score.cpp`** – Implements a custom `Score` class tracking student quiz metrics, featuring overloaded relational operators (`>`, `<`, `==`, `!=`) required to drive the collection's sorted logic.
* **`main.cpp`** – The driver pipeline that runs the sequence tests by adding multiple student scores, removing target metrics, and evaluating sorted outputs.

---

## 🚀 Compilation & Setup

This repository is configured to compile directly using the **Code::Blocks IDE** with the **GNU GCC Compiler**.

1. Download or clone all five source files into your local project directory.
2. Open Code::Blocks and set up a new C++ **Console Application**.
3. Link `main.cpp`, `orderedcollection.h`, `orderedcollection.cpp`, `score.h`, and `score.cpp` to your active build target.
4. **Important for Templates:** If you notice redefinition errors during your build, ensure header guards are wrapped around your template implementation file.
5. Press **F9** (Build and Run) to execute the simulation.

---

## 📊 Terminal Execution Output

When executed successfully, the sorted collection produces the following clean terminal print sequences:

```text
60
75
85
90

Process returned 0 (0x0)   execution time : 0.082 s
Press any key to continue.
