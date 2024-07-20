class Solution {
public:
    int maxVowels(string s, int k) {
        int maxVow = INT_MIN;
        int vow = 0;
        for (int i = 0; i < k; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u') {
                vow++;
            }
        }
        maxVow = vow;
        // vow=0;
        for (int i = k; i < s.size(); i++) {
            // for (int j = i; j < i + k; j++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u') {
                vow++;
            }
            if (s[i - k] == 'a' || s[i - k] == 'e' || s[i - k] == 'i' ||
                s[i - k] == 'o' || s[i - k] == 'u') {
                vow--;
            }
            maxVow = max(vow, maxVow);
           // vow = 0;
        }
        return maxVow;
    }
};