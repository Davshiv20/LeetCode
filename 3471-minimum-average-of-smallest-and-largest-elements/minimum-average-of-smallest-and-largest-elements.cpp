class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        // double avg=(nums[n/2]+nums[(n/2)-1])/2.000;
        // return avg;
        int i=0;
        int j=n-1;
        double avg=0;
        double minAvg=INT_MAX;
        while(i<j)
        {
            avg=(nums[i]+nums[j])/2.000;
            minAvg=min(avg,minAvg);
            i++;
            j--;
        }
        return minAvg;
    }
};