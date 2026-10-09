# Problem D - Unrequited Love

- **Contest Id:** 2275
- **Problem Link:** [Problem D](https://codeforces.com/contest/2275/problem/D)
- **Difficulty:** D

---

## Approach

A common wrong observation that I also fell for was thinking if the elements were c > b > a then we cannot increase the sum.
But in one operation we can first do b += sgn(a - c) until we get a > b, that takes b-a+1 moves and then we can increament the sum.

Also note if a = b = c, then the sum cannot be increased.

For any other case the sum can trivially be increased for each move.

Now as the constraint is k <= 1e18, naturally bin search comes to mind.

## Complexity Analysis

- **Time Complexity:** $O(n)$
- **Space Complexity:** $O(n)$
