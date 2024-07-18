class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int allProd=1;        
        int countZeroes=0;
        for(auto i: nums){
            allProd*=i;
            if(i==0)
            {
                countZeroes++;
            }
        }
        int prodZero=1;
        if(countZeroes==1)
        {
            
            for(auto i:nums)
            {
                if(i==0)
                {
                    prodZero*=1;
                }
                else{
                    prodZero*=i;
                }
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0 && allProd!=0)
            {
                nums[i]=allProd/nums[i];
            }
            else if(allProd==0 && nums[i]!=0)
            {
                nums[i]=0;
            }
            else if(countZeroes==1){
                nums[i]=prodZero;
            }
            else if(countZeroes>1){
                nums[i]=0;
            }
        }
        return nums;
     
    }
};