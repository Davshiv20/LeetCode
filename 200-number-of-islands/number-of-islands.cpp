class Solution {
public:
    void bfs(int i, int j, vector<vector<char>>& grid, // Pass grid by reference
             vector<vector<int>>& visited) {
        visited[i][j] = 1;
        int n = grid.size();
        int delrow[4] = {-1, 0, 1, 0};
        int delcol[4] = {0, 1, 0, -1};
        int m = grid[0].size();
        queue<pair<int, int>> q;
        q.push({i, j});
        while (!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            for (int k = 0; k < 4; k++) {
                int newrow = row + delrow[k];
                int newcol = col + delcol[k];

                if (newrow >= 0 && newrow < n && newcol >= 0 &&
                    newcol < m && grid[newrow][newcol] == '1' &&
                    !visited[newrow][newcol]) {
                    visited[newrow][newcol] = 1;
                    q.push({newrow, newcol});
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int numberOfIslands = 0;
        vector<vector<int>> visited(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == '1' && !visited[i][j]) {

                    bfs(i, j, grid, visited);
                    numberOfIslands++;
                }
            }
        }

        return numberOfIslands;
    }
};
