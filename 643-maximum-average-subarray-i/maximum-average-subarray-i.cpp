class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int l=0;
        int r=0;
        double maxAvg=INT_MIN;
        double sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
        }
        maxAvg=max(maxAvg,sum);
        for(int i=k;i<nums.size();i++)
        {
            sum+=nums[i]-nums[i-k];
            maxAvg=max(maxAvg,sum);
        }
        return maxAvg/k;
        
    }
};