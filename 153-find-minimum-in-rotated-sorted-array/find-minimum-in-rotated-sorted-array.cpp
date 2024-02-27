class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int mini=INT_MAX;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            mini=min(nums[mid],mini);
            if(nums[low]<=nums[mid])
            {
                if(nums[low]<=nums[high])
                {
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
            else
            {
                if(nums[high]<=nums[mid])
                {
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
            }
        
        }
        return mini;
    }
};