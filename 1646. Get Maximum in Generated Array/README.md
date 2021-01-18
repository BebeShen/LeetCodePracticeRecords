# 1646. Get Maximum in Generated Array

## Description

You are given an integer n. An array nums of length n + 1 is generated in the following way:
```
nums[0] = 0
nums[1] = 1
nums[2 * i] = nums[i] when 2 <= 2 * i <= n
nums[2 * i + 1] = nums[i] + nums[i + 1] when 2 <= 2 * i + 1 <= n
Return the maximum integer in the array nums​​​.
```

網路上蠻多做法都是DP累加上去，但是我認為N最大也就100，其實可以先算出值，再MAX出來就好。

---

https://leetcode.com/problems/get-maximum-in-generated-array

---

Runtime: `4 ms`, faster than `100.00%` of C++ online submissions for Get Maximum in Generated Array.
Memory Usage: `5.9 MB`, less than `90.02%` of C++ online submissions for Get Maximum in Generated Array.