class Solution {
public:
    void dfs(vector<vector<int>>& grid, int i, int j) {
        int n = grid.size();
        int m = grid[0].size();
        if (i < 0 || j < 0 || i >= n || j >= m || grid[i][j] != 1) {
            return;
        }
        grid[i][j] = 0;
        dfs(grid, i + 1, j);
        dfs(grid, i - 1, j);
        dfs(grid, i, j + 1);
        dfs(grid, i, j - 1);
    }
    
    int numIslands(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int islands = 0;
        vector<vector<int>> tempGrid = grid; // Work on a copy to avoid modifying the original grid
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (tempGrid[i][j] == 1) {
                    dfs(tempGrid, i, j);
                    islands++;
                }
            }
        }
        return islands;
    }
    
    int minDays(vector<vector<int>>& grid) {
        int chk = numIslands(grid);
        if (chk != 1) {
            return 0;  // Already disconnected
        }
        
        int n = grid.size();
        int m = grid[0].size();

        // Try to disconnect by changing one cell
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    grid[i][j] = 0;
                    int ck = numIslands(grid);
                    if (ck != 1) {
                        return 1;  // Disconnected by removing one cell
                    }
                    grid[i][j] = 1;  // Restore the grid
                }
            }
        }

        // Try to disconnect by removing two adjacent cells
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    grid[i][j] = 0;
                    if ((i > 0 && grid[i - 1][j] == 1) || (i < n - 1 && grid[i + 1][j] == 1) ||
                        (j > 0 && grid[i][j - 1] == 1) || (j < m - 1 && grid[i][j + 1] == 1)) {
                        
                        // Consider the second adjacent cell
                        if (i > 0 && grid[i - 1][j] == 1) {
                            grid[i - 1][j] = 0;
                            if (numIslands(grid) != 1) return 2;
                            grid[i - 1][j] = 1;
                        }
                        if (i < n - 1 && grid[i + 1][j] == 1) {
                            grid[i + 1][j] = 0;
                            if (numIslands(grid) != 1) return 2;
                            grid[i + 1][j] = 1;
                        }
                        if (j > 0 && grid[i][j - 1] == 1) {
                            grid[i][j - 1] = 0;
                            if (numIslands(grid) != 1) return 2;
                            grid[i][j - 1] = 1;
                        }
                        if (j < m - 1 && grid[i][j + 1] == 1) {
                            grid[i][j + 1] = 0;
                            if (numIslands(grid) != 1) return 2;
                            grid[i][j + 1] = 1;
                        }
                    }
                    grid[i][j] = 1;
                }
            }
        }
        
        return 2;  // At least two changes are needed
    }
};
