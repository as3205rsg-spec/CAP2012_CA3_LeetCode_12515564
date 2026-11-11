// LeetCode 977 - Squares of a Sorted Array
// Approach: Two pointers; the largest square is at one of the two ends.
// Time: O(n) | Space: O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = (int)nums.size();
        vector<int> answer(n);
        int left = 0, right = n - 1;
        int position = n - 1;

        while (left <= right) {
            int leftSquare = nums[left] * nums[left];
            int rightSquare = nums[right] * nums[right];

            if (leftSquare > rightSquare) {
                answer[position] = leftSquare;
                left++;
            } else {
                answer[position] = rightSquare;
                right--;
            }
            position--;
        }
        return answer;
    }
};
