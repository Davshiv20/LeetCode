class Solution {
public:
    void bfs(int& i, int& j, vector<vector<char>> grid,
             vector<vector<int>>& visited) {
        visited[i][j] = 1;
        int delRow[4] = {-1, 0, 1, 0};
        int delCol[4] = {0, 1, 0, -1};
        queue<pair<int, int>> q;
        int n = grid.size();
        int m = grid[0].size();
        q.push({i, j});
        while (!q.empty()) {
            int front = q.front().first;
            int second = q.front().second;
            q.pop();
            for (int i = 0; i < 4; i++) {
                int newRow = front + delRow[i];
                int newCol = second + delCol[i];
                if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < m &&
                    grid[newRow][newCol] == '1' && !visited[newRow][newCol]) {
                    visited[newRow][newCol] = 1;
                    q.push({newRow, newCol});
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int islands = 0;
        vector<vector<int>> visited(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1' && !visited[i][j]) {
                    bfs(i, j, grid, visited);

                    islands++;
                }
            }
        }
        return islands;
    }
};