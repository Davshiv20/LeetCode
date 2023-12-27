class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int i=0;
        int j=0;
        int n=colors.size();
        int m=neededTime.size();
        
        int tot=0;
        while(i<n && j<m)
        {
            int cost=0;
        int currMax=0;
            while(colors[i]==colors[j])
            {
                cost+=neededTime[j];
                currMax=max(currMax,neededTime[j]);
                j++;
            }
            tot+=cost-currMax;
            i=j;
        }
        return tot;


        
    }
};