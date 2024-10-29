class Solution {
public:
    vector<int> dir = {-1, 0, 1}; // Directions for row adjustments only

    int dfs(int n, int m, int row, int col, vector<vector<int>>& grid, vector<vector<int>>& memo) {
        // Check if result is already computed for this cell
        if (memo[row][col] != -1) return memo[row][col];
        
        int moves = 0;
        for (int i : dir) {
            int newRow = row + i;
            int newCol = col + 1;
            
            // Ensure the newRow and newCol are within bounds, and we are moving to a cell with a higher value
            if (newRow >= 0 && newRow < m && newCol < n && grid[newRow][newCol] > grid[row][col]) {
                moves = max(moves, 1 + dfs(n, m, newRow, newCol, grid, memo));
            }
        }
        
        // Store result in memo and return it
        return memo[row][col] = moves;
    }

    int maxMoves(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int result = 0;
        
        // Initialize memoization table with -1 (indicating unvisited cells)
        vector<vector<int>> memo(m, vector<int>(n, -1));
        
        // Try to find the longest path starting from each cell in the first column
        for (int i = 0; i < m; i++) {
            result = max(result, dfs(n, m, i, 0, grid, memo));
        }
        return result;
    }
};
