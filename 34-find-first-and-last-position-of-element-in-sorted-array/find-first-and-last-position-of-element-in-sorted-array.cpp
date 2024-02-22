class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        vector<int>ans;
        int ans1=-1;
        int ans2=-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]>=target)
            {
                ans1=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        int high1=n-1;
        int low1=0;
        while(low1<=high1)
        {
            int mid=(low1+high1)/2;
            if(nums[mid]<=target)
            {
                ans2=mid;
                low1=mid+1;
            }
            else
            {
                high1=mid-1;
            }
        }
        if(ans1 != -1 && nums[ans1]==target )
        {
            ans.push_back(ans1);
        }
        else
        {
            ans.push_back(-1);
        }
        if(ans2!=-1 && nums[ans2]==target)
        {
            ans.push_back(ans2);
        }
        else
        {
            ans.push_back(-1);
        }
    
        
        
        return ans;
    }
};