class Solution {
public:
    bool solve(string& s, int i, int j) {
        if (i >= j) {
            return true;
        }
        if (s[i] == s[j]) {
            return solve(s, ++i, --j); // Corrected increments and added return
        }
        return false;
    }

    string longestPalindrome(string s) {
        int maxLen = 0; // Corrected initialization
        int pos = 0;
        for (int i = 0; i < s.size(); i++) {
            for (int j = i; j < s.size(); j++) {
                if (solve(s, i, j)) {
                    if (j - i + 1 > maxLen) { // Improved comparison to update only when longer
                        maxLen = j - i + 1;
                        pos = i;
                    }
                }
            }
        }
        return s.substr(pos, maxLen);
    }   
};
