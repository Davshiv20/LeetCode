#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char, int> firstOccurrence;
        int maxLength = -1;

        for (int i = 0; i < s.size(); i++) {
            char currentChar = s[i];

            if (firstOccurrence.find(currentChar) == firstOccurrence.end()) {
                // If the character is not in the map, add it with the current index
                firstOccurrence[currentChar] = i;
            } else {
                // If the character is already in the map, calculate the distance
                int distance = i - firstOccurrence[currentChar] - 1;
                maxLength = max(maxLength, distance);
            }
        }

        return maxLength;
    }
};
