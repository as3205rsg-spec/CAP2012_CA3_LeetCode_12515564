// LeetCode 84 - Largest Rectangle in Histogram
// Approach: Monotonic increasing stack of indices. When a lower bar appears,
// calculate the largest rectangle for each bar being removed.
// Time: O(n) | Space: O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        long long best = 0;
        int n = (int)heights.size();

        for (int i = 0; i <= n; i++) {
            int currentHeight = (i == n) ? 0 : heights[i];

            while (!st.empty() && heights[st.top()] > currentHeight) {
                int height = heights[st.top()];
                st.pop();

                int width;
                if (st.empty()) width = i;
                else width = i - st.top() - 1;

                best = max(best, 1LL * height * width);
            }

            if (i < n) st.push(i);
        }
        return (int)best;
    }
};
