class Solution {
public:
    // void computePaths(int n,vector<vector<int>>&adj)
    // {
    //     for(int k=1;k<=n;k++)
    //     {
    //         for(int i=1;i<=n;i++)
    //         {
    //             for(int j=1;j<=n;j++)
    //             {
    //                 adj[i][j]=adj[i][j] | (adj[i][k] && adj[k][j]);
    //             }
    //         }
    //     }

    // }
    bool isReachable(int source, int destination, vector<vector<int>>&adj)
    {
        if(source==destination) return true;
        int n=adj.size();
        vector<bool>visited(n,false);
        visited[source]=true;
        queue<int>q;
        q.push(source);
        while(!q.empty())
        {
            int curr=q.front();
            q.pop();
            for(auto i:adj[curr])
            {
                if(i==destination)
                {
                    return true;
                }
                if(!visited[i])
                {
                    visited[i]=true;
                    q.push(i);
                }
            }
        }
        return false;

    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);
        for (const auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        return isReachable(source, destination, adj);
    }
};