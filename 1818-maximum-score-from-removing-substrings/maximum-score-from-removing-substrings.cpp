#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int maximumGain(string s, int x, int y) {
        if (y > x) {
            return helper(s, y, x, 'b', 'a');
        } else {
            return helper(s, x, y, 'a', 'b');
        }
    }

    int helper(string s, int high, int low, char first, char second) {
        string sb;
        int total = 0;

        
        for (char c : s) {
            if (!sb.empty() && sb.back() == first && c == second) {
                sb.pop_back(); 
                total += high;
            } else {
                sb.push_back(c);
            }
        }

        
        string result;
        for (char c : sb) {
            if (!result.empty() && result.back() == second && c == first) {
                result.pop_back();
                total += low;
            } else {
                result.push_back(c);
            }
        }

        return total;
    }
};

