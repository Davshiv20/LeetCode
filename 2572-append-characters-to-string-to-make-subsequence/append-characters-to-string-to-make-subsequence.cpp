class Solution {
public:
    int appendCharacters(string s, string t) {
        int sIndex = 0, tIndex = 0;
        int sLength = s.size(), tLength = t.size();

        // Traverse through both strings to find matching subsequences
        while (sIndex < sLength && tIndex < tLength) {
            if (s[sIndex] == t[tIndex]) {
                tIndex++;  // Move to the next character in t
            }
            sIndex++;  // Always move to the next character in s
        }

        // The remaining length of t that did not match is what needs to be appended
        return tLength - tIndex;
        
    }
};