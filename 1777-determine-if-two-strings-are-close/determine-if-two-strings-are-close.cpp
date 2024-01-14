#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

class Solution {
public:
    bool closeStrings(std::string word1, std::string word2) {
        if (word1.size() != word2.size()) {
            return false;
        }

        set<char> s1(word1.begin(), word1.end());
        set<char> s2(word2.begin(), word2.end());

        if (s1 != s2) {
            return false;
        }

        map<char, int> m1, m2;

        for (char c : word1) {
            m1[c]++;
        }

        for (char c : word2) {
            m2[c]++;
        }

        vector<int> l1 = populateVector(m1);
        vector<int> l2 = populateVector(m2);

        sort(l1.begin(), l1.end());
        sort(l2.begin(), l2.end());

        return l1 == l2;
    }

private:
    vector<int> populateVector(const std::map<char, int>& m) {
        vector<int> result;
        for (const auto& kv : m) {
            result.push_back(kv.second);
        }
        return result;
    }
};
