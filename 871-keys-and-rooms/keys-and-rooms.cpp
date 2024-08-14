class Solution {
public:
    void dfs(int  i, vector<vector<int>> rooms, vector<int>& visited) {
        visited[i] = 1;
        for (auto j : rooms[i]) {
            if (!visited[j]) {
                dfs(j, rooms, visited);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<int> visited(n, 0);
        dfs(0, rooms, visited);
    
        for (auto i : visited) {
            cout << i << " ";
            if (i == 0) {
                return false;
            }
        }
        return true;
    }
};