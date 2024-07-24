class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int count=0;
        int n=grid.size();
        vector<vector<int>>v=grid;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                swap(grid[i][j],grid[j][i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(v[j]==grid[i])
                {
                    count++;
                }
            }
        }        
        return count;
    }
};