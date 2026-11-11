// LeetCode 80 - Remove Duplicates from Sorted Array II
// Approach: Two pointers. Keep a value only if it differs from the value two places behind.
// Time: O(n) | Space: O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int write = 0;

        for (int value : nums) {
            if (write < 2 || value != nums[write - 2]) {
                nums[write] = value;
                write++;
            }
        }
        return write;
    }
};
