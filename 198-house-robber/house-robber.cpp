class Solution {
public:
    int rob(vector<int>& nums) {
       if(nums.size()==0)
       {
           return 0;

       }
       int prev1=0;
       int prev2=0;
       for(int i:nums)
       {
           int temp=prev1;
           prev1=max(prev2+i,prev1);
           prev2=temp;
       }
       return prev1;
    }
};