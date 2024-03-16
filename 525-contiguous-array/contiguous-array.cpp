class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        unordered_map<int,int>mp;
        mp[0]=-1;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0) sum-=1;
            if(nums[i]==1) sum+=1;
            if(mp.find(sum)!=mp.end())
            {
                int ind=mp[sum];
                ans=max(i-ind,ans);
            }
            else{
                mp[sum]=i;
            }
        }
        return ans;
    }
};