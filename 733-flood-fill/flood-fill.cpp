class Solution {
public:
    void dfs(int& sr, int& sc, int iniColor, vector<vector<int>>& visited,
             vector<vector<int>>& copy, int color) {

        visited[sr][sc] = 1;
        copy[sr][sc] = color;
        int n = copy.size();
        int m = copy[0].size();
        int delrow[4] = {-1, 0, 1, 0};
        int delcol[4] = {0, 1, 0, -1};
        for (int i = 0; i < 4; i++) {
            int nrow = sr + delrow[i];
            int ncol = sc + delcol[i];
            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                visited[nrow][ncol] != 1 && copy[nrow][ncol] == iniColor) {
                dfs(nrow, ncol, iniColor, visited, copy, color);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        int iniColor = image[sr][sc];
        int n = image.size();
        int m = image[0].size();
        int startpos = image[sr][sc];
        vector<vector<int>> visited(n, vector<int>(m, 0));
        vector<vector<int>> copy = image;
        dfs(sr, sc, iniColor, visited, copy, color);
        return copy;
    }
};