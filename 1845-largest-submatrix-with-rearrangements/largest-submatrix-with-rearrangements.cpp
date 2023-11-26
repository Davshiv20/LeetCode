class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int maxArea=0;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                //int count=0;
                if(matrix[i][j]==1 && i>0)
                {
                    matrix[i][j]+=matrix[i-1][j];
                }
                
            }
            vector<int>h=matrix[i];
            sort(h.begin(),h.end(),greater<int>());
            for(int row=0;row<matrix[0].size();row++)
            {
                int base=(row+1);
                int height=h[row];
                maxArea=max(maxArea,base*height);

            }
        }
        return maxArea;
    }
};