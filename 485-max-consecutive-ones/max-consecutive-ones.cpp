class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum=0;
        int maxS=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                sum+=1;
            }
            else{
                sum=0;
            }
            maxS=max(sum,maxS);
        }
        return maxS;
    }
};