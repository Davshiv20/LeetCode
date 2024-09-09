class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int startrow=0;
        int startcol=0;
        int endcol=n-1;
        int endrow=n-1;
        int total=n*n;
        int count=1;
        vector<vector<int>>ans(n,vector<int>(n,0));
        while(count<=total)
        {
            for(int i=startcol;count<=total and i<=endcol;i++)
            {
                ans[startrow][i]=count;
                count++;
            }
            startrow++;
            for(int i=startrow;count<=total and i<=endrow;i++)
            {
                ans[i][endcol]=count;
                count++;
            }
            endcol--;
            for(int i=endcol;count<=total and i>=startcol;i--)
            {
                ans[endrow][i]=count;
                count++;
            }
            endrow--;
            for(int i=endrow;count<=total and i>=startrow;i--)
            {
                ans[i][startcol]=count;
                count++;
            }
            startcol++;
        }
        return ans;
        
    }
};