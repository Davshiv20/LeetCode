class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int sR = 0;
        int eR = n - 1;
        int sC = 0;
        int eC = m - 1;
        int j = m*n;
        int count = 0;
        vector<int> vec;
        while (count<j) {
            for (int i = sC;count<j && i <= eC; i++) {
                vec.push_back(matrix[sR][i]);
                count++;
            }
            sR++;
            for (int i = sR;count<j && i <= eR; i++) {
                vec.push_back(matrix[i][eC]);
                count++;
            }
            eC--;
            for (int i = eC;count<j && i >= sC; i--) {
                vec.push_back(matrix[eR][i]);
                count++;
            }
            eR--;
            for (int i = eR;count<j && i >= sR; i--) {
                vec.push_back(matrix[i][sC]);
                count++;
            }
            sC++;
        }
        return vec;
    }
};