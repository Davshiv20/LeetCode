class Solution {
public: 
    bool checkRow(int num, vector<vector<int>>& matrix, int ind)
    {
        int mini=INT_MAX;
        for(int i=0;i<matrix[0].size();i++)
        {
            mini=min(mini,matrix[ind][i]);
        }
        return mini==num;
    }
    bool checkCol(int num, vector<vector<int>>& matrix, int ind)
    {   
        int maxi=INT_MIN;
        for(int i=0;i<matrix.size();i++)
        {
            maxi=max(maxi,matrix[i][ind]);
        }
        return maxi==num;
    }
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int>res;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(checkRow(matrix[i][j],matrix,i) && checkCol(matrix[i][j],matrix,j)){
                    res.push_back(matrix[i][j]);
                }

            }
        }
        return res;
    }
};