# Data Structures & Algorithms (DSA) in C++

[![Language](https://img.shields.io/badge/Language-C%2B%2B17-00599C?style=flat-square&logo=c%2B%2B)](https://isocpp.org/)
[![Problems](https://img.shields.io/badge/Problems%20Solved-400%2B-brightgreen?style=flat-square)](#topic-breakdown)
[![Topics](https://img.shields.io/badge/Topics-15%2B-orange?style=flat-square)](#repository-structure)
[![License](https://img.shields.io/badge/License-MIT-blue?style=flat-square)](LICENSE)

A curated and comprehensive collection of **Data Structures and Algorithms** problem solutions implemented in modern **C++ (C++17)**. This repository serves as an extensive study guide and reference covering essential DSA concepts, standard templates, LeetCode patterns, Striver SDE sheet problems, and campus placement prep (TCS NQT, etc.).

---

## Repository Structure

```text
DSA/
├── Arrays/                         # Array manipulation, searching, and sorting
├── Binary Search Tree/             # BST operations, validations, and traversals
├── Binary Tree/                    # Tree traversals, views, construction, and properties
├── c++/                            # C++ language core, STL containers, algorithms & OOP
│   ├── Dequeue/                    # Double-ended queue operations
│   ├── LIst/                       # Forward list, doubly linked list (std::list)
│   ├── Map/                        # std::map & ordered map problems
│   ├── Multi Map/                  # std::multimap usage
│   ├── Multi Set/                  # std::multiset usage
│   ├── Mutationg STL Algorithm/    # std::reverse, next_permutation, merge, etc.
│   ├── Non-Mutationg STL Algorithm/# binary_search, lower_bound, upper_bound, etc.
│   ├── OOPS/                       # Classes, inheritance, polymorphism, abstraction
│   ├── Pairs/                      # std::pair utility and sorting
│   ├── Priority Queue/             # std::priority_queue and custom comparators
│   ├── Queue/                      # std::queue operations
│   ├── Set/                        # std::set operations, floor & ceil
│   ├── Stack/                      # std::stack implementations and exercises
│   ├── Unordered Map/              # Hash map hashing, frequency counting
│   ├── Unordered Set/              # Hash set uniqueness, intersections
│   └── vectors/                    # Dynamic array methods, sorting, manipulation
├── Dynamic Programming/            # Advanced DP paradigms (Memoization & Tabulation)
│   ├── 1D DP/                      # Linear state transitions (Fibonacci, Frog Jump, etc.)
│   ├── DP on LIS/                  # Longest Increasing Subsequence variants
│   ├── DP on Squares/              # Maximal square / rectangle DP
│   ├── DP on Stocks/               # Best Time to Buy and Sell Stock series
│   ├── DP on Strings/              # LCS, Edit Distance, Longest Palindromic Substring
│   └── Partition DP/               # Matrix Chain Multiplication, Palindrome Partitioning
├── Graphs/                         # Graph theory, BFS, DFS, Shortest Path, Disjoint Set (DSU)
├── Greedy Algorithms/              # Interval scheduling, Jump Game, Fractional Knapsack
├── Heap/                           # Min/Max Heap from scratch, Heapify, HeapSort, Top-K
├── Linked List/                    # Singly/Doubly Linked List, Loop detection, Reversal
├── Miscellaneous/                  # General algorithmic challenges and puzzles
├── Sliding Window & 2 Pointer/     # Subarray constraints, window expansion/shrink
├── Stack&Queue/                    # Monotonic Stacks, LRU/LFU Caches, Expressions
├── String/                         # String matching, Anagrams, Palindromes
├── TCS NQT/                        # Placement-specific problems and aptitude coding
├── Tries/                          # Prefix trees, insertion, search, prefix count
└── demo/                           # Quick scratchpad for I/O and testing
```

---

## Topic Breakdown

| Topic | Directory | Problem Count | Highlights & Key Concepts |
| :--- | :--- | :---: | :--- |
| **C++ Core & STL** | [`c++/`](./c%2B%2B) | **113** | OOP principles, Template metaprogramming, STL Containers (`vector`, `map`, `set`, `queue`), and Mutating / Non-mutating algorithms |
| **Dynamic Programming** | [`Dynamic Programming/`](./Dynamic%20Programming) | **53** | 1D DP, DP on LIS, DP on Strings (LCS, Edit Distance), Stock series, Matrix Chain Multiplication |
| **Graphs** | [`Graphs/`](./Graphs) | **51** | Graph representations, BFS, DFS, Disjoint Set Union (DSU), Shortest Paths, Topological Sort |
| **Binary Tree** | [`Binary Tree/`](./Binary%20Tree) | **31** | Preorder, Inorder, Postorder, Morris Traversal, Tree Views (Top, Bottom, Left, Right), LCA, Diameter |
| **Stack & Queue** | [`Stack&Queue/`](./Stack%26Queue) | **27** | Monotonic Stack, Next/Previous Greater Element, Rainwater Trapping, LRU & LFU Cache |
| **Binary Search Tree** | [`Binary Search Tree/`](./Binary%20Search%20Tree) | **20** | BST validation, insertion, deletion, floor/ceil, K-th smallest element |
| **Sliding Window & 2 Pointer** | [`Sliding Window & 2 Pointer/`](./Sliding%20Window%20%26%202%20Pointer) | **20** | Longest Substring Without Repeating Characters, Subarrays with K Distinct, Minimum Window Substring |
| **Heap / Priority Queue** | [`Heap/`](./Heap) | **17** | Custom Min/Max Heap, `heapify`, HeapSort, K-th largest element, Merge K Sorted Lists |
| **Arrays** | [`Arrays/`](./Arrays) | **17** | Two Pointers, Dutch National Flag, Kadane's Algorithm, Prefix Sums, Matrix rotation |
| **Greedy Algorithms** | [`Greedy Algorithms/`](./Greedy%20Algorithms) | **15** | N Meetings in One Room, Non-overlapping Intervals, Jump Game I & II, Candy Distribution |
| **Linked List** | [`Linked List/`](./Linked%20List) | **12** | Fast & Slow pointers (Floyd's Cycle detection), Reverse in K-Groups, Rotate list, Add two numbers |
| **Strings** | [`String/`](./String) | **9** | Anagram detection, Pangram check, Pattern searching, Character counting |
| **Tries** | [`Tries/`](./Tries) | **6** | Prefix Tree insertion, lookup, prefix count, Bit manipulation with Trie |
| **TCS NQT** | [`TCS NQT/`](./TCS%20NQT) | **5** | Campus placement preparation and standard company patterns |
| **Miscellaneous** | [`Miscellaneous/`](./Miscellaneous) | **4** | Math, Bit manipulation, and general puzzles |
| **Total** | | **400+** | **Comprehensive C++ Problem Collection** |

---

## Getting Started & Compilation

### Prerequisites
- **Compiler**: GCC / G++ (supporting C++17 or newer) or Clang / MSVC.
- **Editor**: [Visual Studio Code](https://code.visualstudio.com/) with the [C/C++ Extension Pack](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools).

### Compiling and Running via Command Line

```bash
# Compile with C++17 standard
g++ -std=c++17 -Wall "Arrays/kadane.cpp" -o solution

# Run executable
./solution

# Run with custom input / output redirection
./solution < input.txt > output.txt
```

### Visual Studio Code Integration
Pre-configured tasks are available in [`.vscode/tasks.json`](./.vscode/tasks.json) to quickly build and test files:
- Press `Ctrl + Shift + B` to compile the active file.
- Automatically handles standard input/output redirection if `input.txt` and `output.txt` are provided.

---

## Coding Guidelines

- **Standard**: C++17
- **Time & Space Complexity**: Analyzed and optimized with efficient Big-O runtime and auxiliary space considerations.
- **Clean Code**: Meaningful variable names, modular helper functions, and STL idioms.

---

## Author

- **GitHub**: [@ankitjha93](https://github.com/ankitjha93)
- **Email**: [93ankitjha@gmail.com](mailto:93ankitjha@gmail.com)
