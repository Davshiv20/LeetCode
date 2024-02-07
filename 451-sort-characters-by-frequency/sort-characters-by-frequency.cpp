#include <unordered_map>
#include <vector>
#include <algorithm>

class Solution {
public:
    string frequencySort(string s) {
        // Step 1: Count the frequency of each character
        unordered_map<char, int> charCount;
        for (char c : s) {
            charCount[c]++;
        }

        // Step 2: Sort characters based on their frequency in descending order
        vector<char> sortedChars;
        for (const auto& entry : charCount) {
            sortedChars.push_back(entry.first);
        }
        sort(sortedChars.begin(), sortedChars.end(), [&](char a, char b) {
            return charCount[a] > charCount[b];
        });

        // Step 3: Build the result string by repeating characters according to their frequency
        string result;
        for (char c : sortedChars) {
            result += string(charCount[c], c);
        }

        // Step 4: Return the final sorted string
        return result;
    }
};