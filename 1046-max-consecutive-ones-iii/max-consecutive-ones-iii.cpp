class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxLen=INT_MIN;
        int n=nums.size();
        int l=0;
        unordered_map<int,int>mp;
        for(int r=0;r<n;r++)
        {
            mp[nums[r]]++;
            while(mp[0]>k)
            {
                  mp[nums[l]]--;
                l++;
              
            }
            int len=r-l+1;
            maxLen=max(len,maxLen);
        }
        return maxLen;
    }
};