class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if (n <= 1) return n; 

        unordered_map<char, int> charIndex; // Map to store the index of characters.
        int maxLength = 0;
        int start = 0; 

        for (int i = 0; i < n; i++) {
            if (charIndex.find(s[i]) != charIndex.end()) {
                
                start = max(start, charIndex[s[i]] + 1);
            }
    
            charIndex[s[i]] = i;
         
            maxLength = max(maxLength, i - start + 1);
        }

        return maxLength;
    }
};
