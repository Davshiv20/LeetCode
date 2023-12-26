class Solution {
public:
    void solve(int i, int n, set<vector<int>>&ans,vector<int>&round,int target,vector<int>&candidates)
    {
        if(target==0)
        {
            ans.insert(round);
        }
        if(i==n)
        {
         //   ans.push_back(target);
            return;
        }
        if(candidates[i]<=target)
        {
            round.push_back(candidates[i]);
            solve(i,n,ans,round,target-candidates[i],candidates);
            round.pop_back();
        }
        // else if(candidates[i]>target)
        // {
            solve(i+1,n,ans,round,target,candidates);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        set<vector<int>>ans;
        vector<int>round;
        solve(0,n,ans,round,target,candidates);
        vector<vector<int>>v;
        for(auto i:ans)
        {
            v.push_back(i);
        }
        return v;

    }
};