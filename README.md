# Cpp-Max-Heap-Priority-Queue
# C++ Max-Heap & Priority Queue Implementation

## 📌 About the Project
This repository features a custom, array-based implementation of a Max-Heap data structure written in C++. Max-Heaps are the underlying foundation for Priority Queues, which are extensively used in embedded software and Real-Time Operating Systems (RTOS) to manage task scheduling and critical interrupts.

This project bypasses standard library queues to manually demonstrate the mechanics of tree-array mapping and logarithmic time-complexity algorithms ($O(\log n)$).

## ⚙️ Core Features
* **Element Insertion (Sift-Up):** Dynamically adds new elements to the array and "percolates" them up to maintain the Max-Heap property.
* **Root Deletion (Sift-Down):** Removes the maximum element (root) and restructures the tree downwards to ensure structural integrity and correct ordering.
* **Top-Down Heap Construction:** Builds a heap iteratively by inserting elements one by one.
* **Bottom-Up Heap Construction (Floyd's Algorithm):** An optimized, in-place method to build a heap from an unsorted array by applying sift-down operations starting from the last non-leaf node, operating in $O(n)$ time.

## 🛠️ Tech Stack & Concepts
* **Language:** C++
* **Concepts:** Data Structures (Complete Binary Trees mapped to Arrays), Algorithmic Complexity, Array Manipulation, RTOS Scheduling Concepts.

## 📁 Repository Structure
* `main.cpp` - Contains the full algorithmic logic including `inserare` (insert), `stergere` (delete), and both heap-building functions (`susjos` and `jossus`).
