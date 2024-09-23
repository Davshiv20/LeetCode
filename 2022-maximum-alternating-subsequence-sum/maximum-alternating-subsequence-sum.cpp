class Solution {
public:
    typedef long long ll;
    int n;
    ll solve(int ind,vector<vector<long long>>& dp,vector<int>& nums, bool flag){
        if(ind>=n){
            return 0;
        }
        if(dp[ind][flag]!=-1){
            return dp[ind][flag];
        }
        ll val=nums[ind];
        if(flag==false){
            val=-val;
        }
        ll take=val+solve(ind+1,dp,nums,!flag);
        ll skip=solve(ind+1,dp,nums,flag);
        return dp[ind][flag]= max(skip,take);
    }
    
    ll maxAlternatingSum(vector<int>& nums) {
        n=nums.size();
        vector<vector<ll>>dp(n,vector<ll>(2,-1));
        return solve(0,dp,nums,true);
    }
};