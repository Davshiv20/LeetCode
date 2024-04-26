class Solution {
public:

    int dp[205][205];
    int ok(vector<vector<int>>&grid,int r, int c)
    {
        int n=grid.size();
        int m=grid[0].size();
        if(r==n) return 0;
        if(r==n-1) return grid[r][c];
        if(dp[r][c]!=-1) return dp[r][c];
        int ans=INT_MAX;
        for(int i=0;i<m;i++) {
            if(i!=c) ans=min(ans,ok(grid,r+1,i));
        }
        return dp[r][c]=ans+grid[r][c];
    }
    int minFallingPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        memset(dp,-1,sizeof(dp));
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            ans=min(ans,ok(grid,0,i));
        }
        return ans;
        
    }
};