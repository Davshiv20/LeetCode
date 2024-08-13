#include <vector>
#include <algorithm> // Include the algorithm header for sort

class Solution {
public:   
    void solve(int i, vector<int>& candidates, vector<int>& temp, int target, vector<vector<int>>& ans) {
        if (target == 0) {
        // if (find(ans.begin(), ans.end(), temp) == ans.end())
                ans.push_back(temp);
                return;
        }

        // if (i == candidates.size()) {
        //     return;
        // }

        // if (candidates[i] <= target) {
        //     temp.push_back(candidates[i]);
        //     solve(i + 1, candidates, temp, target - candidates[i], ans);
        //     temp.pop_back();
        // }

        // solve(i + 1, candidates, temp, target, ans);
        for(int j=i;j<candidates.size();j++)
        {
            if(j>i && candidates[j]==candidates[j-1])
            {
                continue;

            }
            if(candidates[j]>target)
            {
                break;
            }
            temp.push_back(candidates[j]);
            solve(j+1,candidates,temp,target-candidates[j],ans);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;
        solve(0, candidates, temp, target, ans);
        return ans;
    }
};