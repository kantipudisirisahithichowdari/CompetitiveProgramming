# 20. Valid Parentheses

[View on LeetCode](https://leetcode.com/problems/valid-parentheses/)

**Difficulty:** Easy  
**Language:** Java  
**Topics:** String, Stack, Bracket Sequences  
**Solved:** 2026-10-14

> Runtime 3 ms (beats 83.17%) · Memory 42.7 MB (beats 98.67%)

## Problem

Given a string `s` containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['` and `']'`, determine if the input string is valid.

An input string is valid if:

1. Open brackets must be closed by the same type of brackets.
2. Open brackets must be closed in the correct order.
3. Every close bracket has a corresponding open bracket of the same type.

**Example 1:**

**Input:** s = "()"

**Output:** true

**Example 2:**

**Input:** s = "()[]{}"

**Output:** true

**Example 3:**

**Input:** s = "(]"

**Output:** false

**Example 4:**

**Input:** s = "([])"

**Output:** true

**Example 5:**

**Input:** s = "([)]"

**Output:** false

**Constraints:**

- `1 <= s.length <= 10^4`
- `s` consists of parentheses only `'()[]{}'`.

## Solution

See [`solution.java`](./solution.java).
