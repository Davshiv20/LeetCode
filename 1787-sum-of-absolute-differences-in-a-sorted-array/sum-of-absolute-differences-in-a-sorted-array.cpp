class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        vector<int>ans(n);
        int lsum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        int rsum=sum;
        for(int i=0;i<nums.size();i++)
        {
            ans[i]=(nums[i]*i-lsum)+(rsum-(n-i)*nums[i]);
            lsum+=nums[i];
            rsum-=nums[i];
           
        }
        return ans;
    }
};