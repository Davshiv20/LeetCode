#include <vector>

class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        
        for (int i = 0; i < l.size(); i++) {
            vector<int> sub(nums.begin() + l[i], nums.begin() + r[i]+1 );
            sort(sub.begin(),sub.end());

            if (sub.size() <= 2) {
                ans.push_back(true);
            } else {
                bool flag = true; // Assume it's arithmetic
                int diff=sub[1]-sub[0];
                for (int j = 1; j < sub.size() ; j++) {
                    if (sub[j]-sub[j-1]!=diff) {
                        flag = false;
                        break; // No need to check further if it's not arithmetic
                    }
                }

                ans.push_back(flag);
            }
        }

        return ans;
    }
};
