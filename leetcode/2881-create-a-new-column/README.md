# 2881. Create a New Column

[View on LeetCode](https://leetcode.com/problems/create-a-new-column/)

**Difficulty:** Easy  
**Language:** Pandas  
**Solved:** 2026-10-21

> Runtime 292 ms (beats 31.05%) · Memory 65.4 MB (beats 96.79%)

## Problem

```
employees
```

A company plans to provide its employees with a bonus.

Write a solution to create a new column name `bonus` that contains the **doubled values** of the `salary` column.

The result format is in the following example.

**Example 1:**

```
Input:
DataFrame employees
+---------+--------+
| name    | salary |
+---------+--------+
| Piper   | 4548   |
| Grace   | 28150  |
| Georgia | 1103   |
| Willow  | 6593   |
| Finn    | 74576  |
| Thomas  | 24433  |
+---------+--------+
Output:
+---------+--------+--------+
| name    | salary | bonus  |
+---------+--------+--------+
| Piper   | 4548   | 9096   |
| Grace   | 28150  | 56300  |
| Georgia | 1103   | 2206   |
| Willow  | 6593   | 13186  |
| Finn    | 74576  | 149152 |
| Thomas  | 24433  | 48866  |
+---------+--------+--------+
Explanation: 
A new column bonus is created by doubling the value in the column salary.
```

## Solution

See [`solution.py`](./solution.py).
