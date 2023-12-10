class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>transpose;
        for(int i=0;i<m;i++)
        {
            vector<int>v;
            for(int j=0;j<n;j++)
            {
                //transpose[i][j]=matrix[j][i];
                v.push_back(matrix[j][i]);
            }
            transpose.push_back(v);
        }
        return transpose;
    }
};