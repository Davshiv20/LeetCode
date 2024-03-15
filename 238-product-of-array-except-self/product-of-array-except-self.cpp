class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans;
        int product=1;
        int countZeroes=0;
        
        for(auto i:nums)
        {
            product*=i;
            if(i==0)
            {
                countZeroes++;
            }
        }
        int prod_zero=1;
        if(countZeroes>1)
        {
            prod_zero=0;
        }
        else{
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]==0)
                {
                    prod_zero*=1;
                }
                else{
                    prod_zero*=nums[i];
                }
            }
        }
        
        for(int i=0;i<nums.size();i++)
        {
             int prod;
            if(nums[i]==0)
            {
                prod=prod_zero;
            }
            else
            {
                prod=product/nums[i];
            }
            ans.push_back(prod);
        }
        return ans;
    }
};