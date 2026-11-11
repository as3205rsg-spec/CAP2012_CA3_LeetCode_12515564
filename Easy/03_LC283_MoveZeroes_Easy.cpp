// LeetCode 283 - Move Zeroes
// Approach: Two pointers; place non-zero values first, then fill remaining positions with zero.
// Time: O(n) | Space: O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int position = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[position], nums[i]);
                position++;
            }
        }
    }
};
