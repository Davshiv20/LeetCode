class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int>mp;
        int l=0;
        int r=0;
        int maxSum=0;
        int sum=0;
        for(int r=0;r<nums.size();r++)
        {
         
            mp[nums[r]]++;
            sum+=nums[r];
            while(mp[nums[r]]>1)
            {
                mp[nums[l]]--;
                sum-=nums[l];
                l++;
            }
            cout<<sum<<endl;
            maxSum=max(sum,maxSum);
        }
        return maxSum;
    }
};