class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int minI=INT_MAX;
        int minJ=INT_MAX;
        int maxJ=INT_MIN;
        int maxI=INT_MIN;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {
                    minI=min(minI,i);
                    maxI=max(maxI,i);
                    minJ=min(minJ,j);
                    maxJ=max(maxJ,j);
                }
            }
        }
        int area=(maxI+1-minI)*(maxJ+1-minJ);
        return area;

    }
};