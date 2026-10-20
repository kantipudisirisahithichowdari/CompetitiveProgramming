# 2879. Display the First Three Rows

[View on LeetCode](https://leetcode.com/problems/display-the-first-three-rows/)

**Difficulty:** Easy  
**Language:** Pandas  
**Solved:** 2026-10-20

> Runtime 263 ms (beats 83.47%) · Memory 66.2 MB (beats 78.50%)

## Problem

```
employees
```

Write a solution to display the **first `3`**rowsof this DataFrame.

**Example 1:**

```
Input:
DataFrame employees
+-------------+-----------+-----------------------+--------+
| employee_id | name      | department            | salary |
+-------------+-----------+-----------------------+--------+
| 3           | Bob       | Operations            | 48675  |
| 90          | Alice     | Sales                 | 11096  |
| 9           | Tatiana   | Engineering           | 33805  |
| 60          | Annabelle | InformationTechnology | 37678  |
| 49          | Jonathan  | HumanResources        | 23793  |
| 43          | Khaled    | Administration        | 40454  |
+-------------+-----------+-----------------------+--------+
Output:
+-------------+---------+-------------+--------+
| employee_id | name    | department  | salary |
+-------------+---------+-------------+--------+
| 3           | Bob     | Operations  | 48675  |
| 90          | Alice   | Sales       | 11096  |
| 9           | Tatiana | Engineering | 33805  |
+-------------+---------+-------------+--------+
Explanation: 
Only the first 3 rows are displayed.
```

## Solution

See [`solution.py`](./solution.py).
