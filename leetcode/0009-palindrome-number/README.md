# 9. Palindrome Number

[View on LeetCode](https://leetcode.com/problems/palindrome-number/)

**Difficulty:** Easy  
**Language:** Java  
**Topics:** Math  
**Solved:** 2026-10-14

> Runtime 14 ms (beats 5.32%) · Memory 45 MB (beats 99.83%)

## Problem

Given an integer `x`, return `true` if `x` is a **palindrome**, and `false` otherwise.

**Example 1:**

```
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
```

**Example 2:**

```
Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
```

**Example 3:**

```
Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
```

**Constraints:**

- `-2^31 <= x <= 2^31 - 1`

**Follow up:** Could you solve it without converting the integer to a string?

## Solution

See [`solution.java`](./solution.java).
