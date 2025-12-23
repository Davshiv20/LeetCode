class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int sum =0;
        int maxSum=0;
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        }
        maxSum=sum;
        int l = k-1;
        int r = n-1;
        while(k!=0){
            sum-=cardPoints[l];
            sum+=cardPoints[r];
            maxSum=max(sum,maxSum);
            k--;
            r--;
            l--;
          
        }
        return maxSum;
         

        
    }
};