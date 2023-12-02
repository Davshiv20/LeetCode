class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> charCount(26, 0); // Initialize a vector to store character counts.

        // Count characters in chars.
        for (char ch : chars) {
            charCount[ch - 'a']++;
        }

        int result = 0;

        // Check if each word can be formed from chars.
        for (const string& word : words) {
            vector<int> wordCount(26, 0);

            // Count characters in the current word.
            for (char ch : word) {
                wordCount[ch - 'a']++;
            }

            // Check if the word can be formed using chars.
            bool valid = true;
            for (int i = 0; i < 26; i++) {
                if (wordCount[i] > charCount[i]) {
                    valid = false;
                    break;
                }
            }

            // If the word is valid, add its length to the result.
            if (valid) {
                result += word.length();
            }
        }

        return result;
    }
};
