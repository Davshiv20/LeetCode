class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        int res=1;
        for(int i=0;i<nums.size();i++)
        {
           if(nums[i]==res)
           {
               res++;
           }
        }
        return res;
       
    }
};