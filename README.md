# Longest Common Prefix

[![Instagram](https://img.shields.io/badge/Instagram-%40lacopydepastel-E4405F?style=for-the-badge&logo=instagram&logoColor=white)](https://www.instagram.com/lacopydepastel)
[![YouTube](https://img.shields.io/badge/YouTube-%40rvorine-FF0000?style=for-the-badge&logo=youtube&logoColor=white)](https://www.youtube.com/@rvorine)

## Problem

Write a function to find the **longest common prefix** string amongst an array of strings.

If there is no common prefix, return an empty string `""`.

**Example 1:**
```
Input:  ["flower", "flow", "flight"]
Output: "fl"
```

**Example 2:**
```
Input:  ["dog", "racecar", "car"]
Output: ""
Explanation: There is no common prefix among the input strings.
```

**Constraints:**
- `1 <= strs.length <= 200`
- `0 <= strs[i].length <= 200`
- `strs[i]` consists of only lowercase English letters.

## Solution

The approach used here is **horizontal scanning**:

1. Start with the first string as the initial prefix candidate.
2. Iterate through each remaining string.
3. Trim the prefix from the right until the current string starts with it.
4. If the prefix becomes empty at any point, return `""`.
5. Return the final prefix.

**Time complexity:** O(S), where S is the sum of all characters in all strings.  
**Space complexity:** O(1).

## Implementations

| Language     | File                          |
|--------------|-------------------------------|
| Python       | [python/solution.py](python/solution.py) |
| JavaScript   | [javascript/solution.js](javascript/solution.js) |
| Java         | [java/Solution.java](java/Solution.java) |
| C++          | [cpp/solution.cpp](cpp/solution.cpp) |
| Go           | [go/solution.go](go/solution.go) |