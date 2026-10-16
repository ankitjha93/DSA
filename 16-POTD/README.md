# Problem of the Day (POTD) Solutions

[![LeetCode POTD](https://img.shields.io/badge/LeetCode-POTD-FFA116?style=for-the-badge&logo=leetcode&logoColor=white)](https://leetcode.com/)
[![GFG POTD](https://img.shields.io/badge/GeeksforGeeks-POTD-2F8D46?style=for-the-badge&logo=geeksforgeeks&logoColor=white)](https://practice.geeksforgeeks.org/problem-of-the-day)
[![Language](https://img.shields.io/badge/Language-C%2B%2B17-00599C?style=for-the-badge&logo=c%2B%2B)](https://isocpp.org/)
[![Streak](https://img.shields.io/badge/Daily%20Streak-Active-brightgreen?style=for-the-badge)](#potd-log)

A dedicated log and archive of daily **Problem of the Day (POTD)** solutions solved on **LeetCode** and **GeeksforGeeks (GFG)**. All solutions are written in **C++17**, organized chronologically by year and month.

---

## Folder Organization

```text
16-POTD/
├── LeetCode/
│   └── YYYY-MM/                     # e.g., 2026-10/
│       └── YYYY-MM-DD-<title>.cpp   # Daily LeetCode solution
├── GeeksforGeeks/
│   └── YYYY-MM/                     # e.g., 2026-10/
│       └── YYYY-MM-DD-<title>.cpp   # Daily GFG solution
├── new-potd.ps1                     # PowerShell automation script
└── README.md                        # Streak tracker & problem table
```

---

## Quick Start: Adding Today's POTD

Use the included PowerShell helper to scaffold the C++ solution template and automatically update the log table in one step.

### 1. Interactive Mode (Prompts for info)
Simply run the script in PowerShell:
```powershell
.\16-POTD\new-potd.ps1
```

### 2. Command-Line Arguments
```powershell
# LeetCode example
.\16-POTD\new-potd.ps1 -Platform LeetCode -Title "Maximum Subarray" -Difficulty Medium -Topic "Array, DP" -Url "https://leetcode.com/problems/maximum-subarray"

# GeeksforGeeks example
.\16-POTD\new-potd.ps1 -Platform GFG -Title "Subarray with Given Sum" -Difficulty Medium -Topic "Sliding Window" -Url "https://practice.geeksforgeeks.org/problems/subarray-with-given-sum"
```

The script will automatically:
1. Create the `YYYY-MM` month folder if it does not exist.
2. Generate the `.cpp` file with metadata header, `#include <bits/stdc++.h>`, class `Solution`, and `main()` runner.
3. Add a new row to the [POTD Log](#potd-log) table below.

---

## POTD Log

| Date | Platform | Problem Title | Difficulty | Topic | Solution | Complexity |
| :---: | :---: | :--- | :---: | :--- | :---: | :---: |
| `2026-10-16` | GeeksforGeeks | [Subarray with Given Sum](https://practice.geeksforgeeks.org/problems/subarray-with-given-sum) | **Medium** | Sliding Window | [`Code`](./GeeksforGeeks/2026-10/2026-10-16-subarray-with-given-sum.cpp) | O(...) / O(...) |
| `2026-10-16` | LeetCode | [Reverse Words in a String](https://leetcode.com/problems/reverse-words-in-a-string) | **Medium** | String, Two Pointers | [`Code`](./LeetCode/2026-10/2026-10-16-reverse-words-in-a-string.cpp) | O(...) / O(...) |
