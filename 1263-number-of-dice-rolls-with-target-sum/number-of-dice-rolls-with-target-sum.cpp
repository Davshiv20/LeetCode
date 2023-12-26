class Solution {
public:
    int t[31][1009];
    int mod=1e9+7;
    int solve(int n,int k, int target)
    {
        if(target<0)
        {
            return 0;
        }
        if(t[n][target]!=-1)
        {
            return t[n][target];
        }
        if(n==0)
        {
            return target==0;
        }
        int ways=0;
        for(int i=1;i<=k;i++)
        {
            ways=(ways+solve(n-1,k,target-i))%mod;
        }
        return t[n][target]=ways;

        
    }
    int numRollsToTarget(int n, int k, int target) {
       memset(t,-1,sizeof(t));
       return solve(n,k,target);
    }
};