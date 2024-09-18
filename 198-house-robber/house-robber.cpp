class Solution {
public:
    int robber(vector<int>&nums,vector<int>&dp, int i){
        if(i<0){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        return dp[i]=max(robber(nums,dp,i-2)+nums[i],robber(nums,dp,i-1));
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return robber(nums,dp,nums.size()-1);
    }
};