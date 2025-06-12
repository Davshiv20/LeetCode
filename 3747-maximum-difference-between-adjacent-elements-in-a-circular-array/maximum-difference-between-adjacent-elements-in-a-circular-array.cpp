class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int maxDiff=INT_MIN;
        int n =nums.size();
        for(int i=1;i<n;i++){
            int diff = abs(nums[i]-nums[i-1]);
            if(diff>maxDiff){
                maxDiff=diff;
            }
        }
        int adjDiff= abs(nums[0]-nums[n-1]);
        cout<<maxDiff;
        if(adjDiff>maxDiff){
            maxDiff=adjDiff;

        }
        return maxDiff;
    }
};