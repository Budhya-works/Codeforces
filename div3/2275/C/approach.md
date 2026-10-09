# Problem C - Unrequited Love

- **Contest Id:** 2275
- **Problem Link:** [Problem C](https://codeforces.com/contest/2275/problem/C)
- **Difficulty:** C-

---

## Approach

Precomputing the sum of triads and treating the first term as the indicator for each triad works. Keep in mind there are exactly n-4 such triads.
Count the occurances of a sum using a hash map and then for triad indicator i, just look for if the triad at i-4, i-2, i+2, i+4 have the same sum or not, and decrement for each same sum.

Keep in mind about double counting, either only count one way or count both ways and then return ans/2.

## Complexity Analysis

- **Time Complexity:** $O(n)$
- **Space Complexity:** $O(n)$
