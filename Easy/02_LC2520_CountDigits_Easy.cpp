// LeetCode 2520 - Count the Digits That Divide a Number
// Approach: Extract each digit and check whether it divides the original number.
// Time: O(d) | Space: O(1), where d is the number of digits.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countDigits(int num) {
        int original = num;
        int count = 0;

        while (num > 0) {
            int digit = num % 10;
            if (original % digit == 0) {
                count++;
            }
            num /= 10;
        }
        return count;
    }
};
