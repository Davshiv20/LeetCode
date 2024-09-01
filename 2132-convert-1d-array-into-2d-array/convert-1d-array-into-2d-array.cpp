class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if (m * n != original.size()) {
            return {}; // Return an empty 2D array if it's not possible to
                       // reshape
        }

        // Initialize the result 2D vector
        vector<vector<int>> res(m, vector<int>(n));
        int k = 0;

        // Fill the 2D array with elements from the original 1D array
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                res[i][j] = original[k++];
            }
        }

        return res;
      
    }
};