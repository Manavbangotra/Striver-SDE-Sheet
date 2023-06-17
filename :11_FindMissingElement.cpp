// Cokestudio 
#include <bits/stdc++.h>
pair<int, int> missingAndRepeating(vector<int>& arr, int n)
{
    int x = 0, y = 0; // repeating and missing numbers resp.
    int i;
    int xorNum = 0, setBit;

    // xor of all numbers
    for (auto num : arr) xorNum ^= num;
    // xor with 1 to n
    for (int i = 1; i <= n; i++) xorNum ^= i;

    // get rightmost set bit no.
    setBit = xorNum & ~(xorNum - 1);

    // compare and divide into 2 sets
    for (int i = 0; i < n; i++) {
        if (arr[i] & setBit) {
            x ^= arr[i];
        } else {
            y ^= arr[i];
        }
    }
    for (i = 1; i <= n; i++) {
        if (i & setBit)
            x ^= i;
        else
            y ^= i;
    }

    // number may be swap, recheck to confirm
    int xCnt = 0;
    for (auto num : arr) {
        if (num == x) xCnt++;
    }

    if (xCnt != 0) return { y, x };
    return { x, y };
}
