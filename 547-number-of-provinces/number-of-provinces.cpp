class Solution {
public:
    void dfs(vector<int> adj[], vector<int>& visited, int node) {
        visited[node] = 1;
        for (auto i : adj[node]) {
            if (!visited[i]) {
                dfs(adj, visited, i);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> adj[n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (isConnected[i][j] == 1 && i != j) {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        // made an adjacency list out of the matrix
        //  do bfs/dfs and increase counter
        int count = 0;
        vector<int> visited(n, 0); // visited array
        for (int i = 0; i < n; i++) {
            if (visited[i] != 1) {
                dfs(adj, visited, i);
                count++;
            }
        }
        return count;
    }
};