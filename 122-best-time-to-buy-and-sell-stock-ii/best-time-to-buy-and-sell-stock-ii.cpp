class Solution {
public: 
    int n;
    int solve(int i,vector<vector<int>>&dp, vector<int>& prices, bool flag){
        if(i>=n){
            return 0;
        }
        if(dp[i][flag]!=-1){
            return dp[i][flag];
        }
        int val=prices[i];
        if(!flag){
            val=-val;
        }
        int take=val+solve(i+1,dp,prices,!flag);
        int skip=solve(i+1,dp,prices,flag);
        return dp[i][flag]= max(take,skip);

    }
    int maxProfit(vector<int>& prices) {
         n=prices.size();
         vector<vector<int>>dp(n,vector<int>(2,-1));
        return solve(0,dp,prices,false);                
    }
};