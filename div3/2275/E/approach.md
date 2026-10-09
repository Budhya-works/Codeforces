# Problem E - Repentance Is Already on the Way

- **Contest Id:** 2275
- **Problem Link:** [Problem E](https://codeforces.com/contest/2275/problem/E)
- **Difficulty:** E--

---

## Approach
By observation it is clear that the path follows an exact pattern, where we need take into account of when to take turn.
By turn I mean when we go from ai to bi+1 instead of bi, that decision alone will decide the total distance.

A standard suffix approach suffice in this problem.

## Complexity Analysis

- **Time Complexity:** $O(n)$
- **Space Complexity:** $O(n)$
- The sapce complexity can definitely be improved using auxillary variables
