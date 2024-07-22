class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int maxLen = INT_MIN;
        int l = 0;
        unordered_map<char, int> mp;
        for (int r = 0; r < answerKey.size(); r++) {
            mp[answerKey[r]]++;

            int count = max(mp['T'],mp['F']);

            while (r-l+1-count> k) {

                mp[answerKey[l]]--;

                l++;
            }
            maxLen = max(maxLen, r - l + 1);
        }
        return maxLen;
    }
};