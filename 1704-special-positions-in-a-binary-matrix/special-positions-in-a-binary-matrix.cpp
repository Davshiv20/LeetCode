class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<int>row(n);
        vector<int>col(m);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                row[i]+=mat[i][j];
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                col[i]+=mat[j][i];
            }
        }
        int res=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==1 && row[i]==1 && col[j]==1)
                {
                    res+=1;
                }
            }
        }
  //     return row[n-1];
       return res;
    }
};