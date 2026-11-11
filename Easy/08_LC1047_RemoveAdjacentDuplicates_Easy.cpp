// LeetCode 1047 - Remove All Adjacent Duplicates in String
// Approach: Use a string as a stack. Remove the top when the next character matches it.
// Time: O(n) | Space: O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        string result;

        for (char ch : s) {
            if (!result.empty() && result.back() == ch) {
                result.pop_back();
            } else {
                result.push_back(ch);
            }
        }
        return result;
    }
};
