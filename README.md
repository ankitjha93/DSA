# Data Structures & Algorithms (DSA) in C++

[![Language](https://img.shields.io/badge/Language-C%2B%2B17-00599C?style=for-the-badge&logo=c%2B%2B)](https://isocpp.org/)
[![Problems](https://img.shields.io/badge/Problems%20Solved-400%2B-2ea44f?style=for-the-badge)](#curriculum--topic-index)
[![Modules](https://img.shields.io/badge/Roadmap%20Modules-15-blueviolet?style=for-the-badge)](#learning-roadmap)
[![Standard](https://img.shields.io/badge/Standard-Clean%20%26%20Optimized-orange?style=for-the-badge)](#compilation--development-guide)

A structured, industry-aligned repository containing **400+** Data Structures and Algorithms solutions implemented in modern **C++ (C++17)**. 

Organized sequentially in a **pedagogical learning order**—spanning core language idioms, standard data structures, advanced algorithmic paradigms (Striver SDE Sheet, LeetCode, Codeforces), and campus placement coding patterns (TCS NQT).

---

## Learning Roadmap

Follow the numbered curriculum from foundational primitives to advanced graph and DP paradigms:

```text
[ 01: C++ & STL ] ──────► [ 02: Arrays ] ──────► [ 03: Strings ]
                                                        │
┌───────────────────────────────────────────────────────┘
▼
[ 04: Linked List ] ────► [ 05: Stack & Queue ] ──► [ 06: Two Pointer / Sliding Window ]
                                                                   │
┌──────────────────────────────────────────────────────────────────┘
▼
[ 07: Binary Tree ] ────► [ 08: Binary Search Tree ] ──► [ 09: Heaps & Priority Queues ]
                                                                   │
┌──────────────────────────────────────────────────────────────────┘
▼
[ 10: Greedy ] ─────────► [ 11: Dynamic Programming ] ─► [ 12: Graphs ]
                                                                   │
┌──────────────────────────────────────────────────────────────────┘
▼
[ 13: Tries ] ──────────► [ 14: TCS NQT Prep ] ────────► [ 15: Miscellaneous & Bit Tricks ]
```

---

## Curriculum & Topic Index

| Step | Topic Directory | Problems | Key Concepts & Patterns Covered |
| :---: | :--- | :---: | :--- |
| **01** | [`01-CPP-and-STL/`](./01-CPP-and-STL) | **115** | OOP (Inheritance, Polymorphism), Templates, STL Containers (`Vectors`, `List`, `Deque`, `Set`, `Map`), Mutating & Non-Mutating Algorithms, Lambdas |
| **02** | [`02-Arrays/`](./02-Arrays) | **17** | Kadane's Algorithm, Dutch National Flag (Sort 0-1-2), Array Rotations, Duplicate Detection, Inversion Count |
| **03** | [`03-Strings/`](./03-Strings) | **9** | Anagram Detection, Pattern Searching, Palindromic Checks, Case Conversion, Consonant & Vowel Manipulation |
| **04** | [`04-Linked-List/`](./04-Linked-List) | **12** | Fast & Slow Pointers (Floyd's Cycle Detection), Reverse in K-Groups, Rotate List, Intersection Point, Sorted Merging |
| **05** | [`05-Stack-and-Queue/`](./05-Stack-and-Queue) | **27** | Monotonic Stack, Next/Previous Greater Element, Rainwater Trapping, LRU & LFU Cache, Expression Conversions |
| **06** | [`06-Sliding-Window-Two-Pointer/`](./06-Sliding-Window-Two-Pointer) | **20** | Variable & Fixed Windows, Longest Substring Without Repeating Characters, Fruit Into Baskets, Minimum Window Substring |
| **07** | [`07-Binary-Tree/`](./07-Binary-Tree) | **31** | Traversals (In/Pre/Post/Level-Order/Morris), Tree Views (Top/Bottom/Left/Right), Diameter, LCA, Burning Tree |
| **08** | [`08-Binary-Search-Tree/`](./08-Binary-Search-Tree) | **20** | BST Validation, Search/Insert/Delete, Floor & Ceil, Inorder Successor/Predecessor, Largest BST in Binary Tree |
| **09** | [`09-Heap/`](./09-Heap) | **17** | Min & Max Heap from scratch, `heapify`, HeapSort, Kth Largest/Smallest Element, Merge K Sorted Lists |
| **10** | [`10-Greedy-Algorithms/`](./10-Greedy-Algorithms) | **15** | N Meetings in One Room, Non-Overlapping Intervals, Jump Game I & II, Fractional Knapsack, Candy Distribution |
| **11** | [`11-Dynamic-Programming/`](./11-Dynamic-Programming) | **53** | 1D DP, 2D Grid DP, Subsequences / Knapsack, LIS, Strings (LCS, Edit Distance), Stocks Series, Partition DP |
| **12** | [`12-Graphs/`](./12-Graphs) | **51** | BFS, DFS, Cycle Detection, Topological Sort (Kahn's), Dijkstra, Bellman-Ford, Floyd-Warshall, Disjoint Set Union (DSU) |
| **13** | [`13-Tries/`](./13-Tries) | **6** | Trie Node Implementation, Prefix Matching, Distinct Substrings Count, Maximum XOR of Two Numbers |
| **14** | [`14-TCS-NQT/`](./14-TCS-NQT) | **5** | Placement-focused challenges: GCD of Strings, Increasing Triplet, Kids With Greatest Candies |
| **15** | [`15-Miscellaneous/`](./15-Miscellaneous) | **4** | Built-in bit manipulations (`__builtin_popcount`), Matrix properties, C++ Tuple utilities |
| **--** | [`demo/`](./demo) | **1** | Scratchpad for test cases and local I/O execution |
| | **Total Solved Problems** | **403** | **Production-Quality C++ Implementations** |

---

## Detailed Module Deep-Dives

### 01. C++ Core & Standard Template Library (STL)
Located in [`01-CPP-and-STL/`](./01-CPP-and-STL):
- **Core Basics & Language Features**: Templates, Function Pointers, File I/O (`readingFile.cpp`, `writingFile.cpp`).
- **Object-Oriented Programming (OOPS)**: Abstraction, Encapsulation, Single/Multiple/Hierarchical Inheritance, Polymorphism, Inner Classes, Object Cloning.
- **STL Containers**: `Vectors`, `List`, `Deque`, `Queue`, `Stack`, `Set`, `Multi-Set`, `Map`, `Multi-Map`, `Unordered-Map`, `Unordered-Set`, `Priority-Queue`, `Pairs`.
- **Algorithms**: Mutating algorithms (`next_permutation`, `prev_permutation`, `reverse`, `rotate`, `sortByLambdaExpression`), Non-mutating algorithms (`binary_search`, `lower_bound`, `upper_bound`, `accumulate`, `count`, `find`).

### 11. Dynamic Programming Framework
Located in [`11-Dynamic-Programming/`](./11-Dynamic-Programming), organized into 8 modular paradigms:
1. **[`1D-DP/`](./11-Dynamic-Programming/1D-DP)**: Fibonacci, Climbing Stairs, Frog Jump I & II, House Robber, Maximum Sum of Non-Adjacent Elements.
2. **[`2D-Grid-DP/`](./11-Dynamic-Programming/2D-Grid-DP)**: Ninja's Training, Unique Paths I & II, Minimum Path Sum in Grid, Triangular Grid, Maximum Path Sum in Matrix, Chocolate Pickup (Cherry Pickup II).
3. **[`DP-on-Subsequences/`](./11-Dynamic-Programming/DP-on-Subsequences)**: 0/1 Knapsack, Subset Sum equals K, Partition Equal Subset Sum, Partition with Given Difference, Count Subsets with Sum K, Coin Change II, Minimum Elements, Target Sum, Rod Cutting, Unbounded Knapsack.
4. **[`DP-on-Strings/`](./11-Dynamic-Programming/DP-on-Strings)**: Longest Common Subsequence (LCS), Longest Common Substring, Printing LCS, Longest Palindromic Subsequence, Minimum Insertions to make Palindrome, Edit Distance, Wildcard Matching, Distinct Subsequences, Word Break.
5. **[`DP-on-Stocks/`](./11-Dynamic-Programming/DP-on-Stocks)**: Best Time to Buy and Sell Stock I, II, III, IV, with Cooldown, and with Transaction Fee.
6. **[`DP-on-LIS/`](./11-Dynamic-Programming/DP-on-LIS)**: Longest Increasing Subsequence, Largest Divisible Subset, Longest Bitonic Subsequence, Longest String Chain.
7. **[`Partition-DP/`](./11-Dynamic-Programming/Partition-DP)**: Matrix Chain Multiplication (MCM), Minimum Cost to Cut a Stick, Burst Balloons, Palindrome Partitioning, Partition Array for Maximum Sum, Boolean Evaluation.
8. **[`DP-on-Squares/`](./11-Dynamic-Programming/DP-on-Squares)**: Maximal Rectangle, Count Square Submatrices with All Ones.

---

## Compilation & Development Guide

### Prerequisites
- **Compiler**: GCC / G++ (supporting C++17 or newer)
- **Editor**: [Visual Studio Code](https://code.visualstudio.com/) with the [C/C++ Extension](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)

### Command-Line Compilation

Compile any file directly with C++17 optimization:

```bash
# Example: Compiling Dijkstra's algorithm from Graphs
g++ -std=c++17 -Wall "12-Graphs/dijikstrasAlgorithmPQ.cpp" -o solution

# Execute
./solution

# Execute with input/output redirection
./solution < demo/input.txt > demo/output.txt
```

### Visual Studio Code Integration
The repository includes a pre-configured [`.vscode/tasks.json`](./.vscode/tasks.json):
- Open any `.cpp` file in VS Code.
- Press **`Ctrl + Shift + B`** to trigger the build task.
- The build task automatically links MinGW `g++.exe` with `-std=c++17` flags.
- Compiled binaries are automatically ignored by [`.gitignore`](./.gitignore) to keep the repository clean.

---

## Author

- **Author**: Ankit Jha
- **GitHub**: [@ankitjha93](https://github.com/ankitjha93)
- **Email**: [93ankitjha@gmail.com](mailto:93ankitjha@gmail.com)
