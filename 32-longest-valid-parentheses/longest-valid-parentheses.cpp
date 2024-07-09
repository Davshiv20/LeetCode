#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> stk; // stack to keep track of indices
        vector<int> arr(s.size(), 0); // to store the valid pairs

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(') {
                stk.push(i);
            } else if (!stk.empty() && s[stk.top()] == '(') {
                arr[i] = 1;
                arr[stk.top()] = 1;
                stk.pop();
            }
        }

        int maxLen = 0;
        int currentLen = 0;

        for (int i = 0; i < arr.size(); ++i) {
            if (arr[i] == 1) {
                currentLen++;
                maxLen = max(maxLen, currentLen);
            } else {
                currentLen = 0;
            }
        }

        return maxLen;
    }
};


