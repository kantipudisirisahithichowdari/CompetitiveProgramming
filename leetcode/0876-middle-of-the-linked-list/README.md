# 876. Middle of the Linked List

[View on LeetCode](https://leetcode.com/problems/middle-of-the-linked-list/)

**Difficulty:** Easy  
**Language:** Java  
**Topics:** Linked List, Two Pointers  
**Solved:** 2026-10-15

> Runtime 0 ms (beats 100.00%) · Memory 42.7 MB (beats 83.54%)

## Problem

Given the `head` of a singly linked list, return *the middle node of the linked list*.

If there are two middle nodes, return **the second middle** node.

**Example 1:**

![](https://assets.leetcode.com/uploads/2021/07/23/lc-midlist1.jpg)

```
Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.
```

**Example 2:**

![](https://assets.leetcode.com/uploads/2021/07/23/lc-midlist2.jpg)

```
Input: head = [1,2,3,4,5,6]
Output: [4,5,6]
Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.
```

**Constraints:**

- The number of nodes in the list is in the range `[1, 100]`.
- `1 <= Node.val <= 100`

## Solution

See [`solution.java`](./solution.java).
