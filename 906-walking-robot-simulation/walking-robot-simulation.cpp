#include <vector>
#include <set>
#include <algorithm>
using namespace std;

class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int x = 0, y = 0;
        vector<pair<int, int>> paths = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        set<pair<int, int>> s;
        
        // Insert all obstacles into the set
        for (auto& i : obstacles) {
            s.insert({i[0], i[1]});
        }
        
        int d = 0;  // direction index
        int res = 0;
        
        // Iterate through all commands
        for (int i = 0; i < commands.size(); i++) {
            if (commands[i] == -1) {  // turn right
                d = (d + 1) % 4;
            } else if (commands[i] == -2) {  // turn left
                d = (d + 3) % 4;
            } else {  // move forward
                pair<int, int> curr = paths[d];
                int dx = curr.first;
                int dy = curr.second;
                
                for (int j = 0; j < commands[i]; j++) {
                    // Check if the next position is an obstacle
                    if (s.find({x + dx, y + dy}) != s.end()) {
                        break;
                    }
                    x += dx;
                    y += dy;
                }
            }
            // Update the maximum Euclidean distance squared
            res = max(res, x * x + y * y);
        }
        
        return res;
    }
};
