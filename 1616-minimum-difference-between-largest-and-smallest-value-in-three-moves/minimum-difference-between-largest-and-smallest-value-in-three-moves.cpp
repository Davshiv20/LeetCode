class Solution {
public:
    int minDifference(vector<int>& nums) {
        if(nums.size()<=4)
        {
            return 0;
        }
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int mini=INT_MAX;
        int diff1=abs(nums[0]-nums[n-4]);
        mini=min(mini,diff1);
        int diff2=abs(nums[n-1]-nums[3]);
        mini=min(mini,diff2);
        int diff3=abs(nums[1]-nums[n-3]);
        mini=min(mini,diff3);
        int diff4=abs(nums[n-2]-nums[2]);
        mini=min(mini,diff4);
        return mini;
        
        
    }
};