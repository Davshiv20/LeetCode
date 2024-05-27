class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        vector<int>ans;
        while(start<end)
        {
            int comp=target;
            if(nums[start]+nums[end]>comp)
            {
                end--;
            }
            else if(nums[start]+nums[end]==comp)
            {
                ans.push_back(start+1);
                ans.push_back(end+1);
                break;
            }
            else{
                start++;
            }
        }
        return ans;
    }
};