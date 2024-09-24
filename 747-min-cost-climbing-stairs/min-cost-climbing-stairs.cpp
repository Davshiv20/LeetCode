class Solution {
public: 
    int solve(int i, vector<int>& dp, vector<int>& cost){
        if(i<0){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        return dp[i]=min(cost[i]+solve(i-1,dp,cost),cost[i]+solve(i-2,dp,cost));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n,-1);
       return min(solve(n-1,dp,cost),solve(n-2,dp,cost));
    }
};