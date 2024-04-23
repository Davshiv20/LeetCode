class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj;
        vector<int>ans;
        if(n<=0) return ans;
        vector<int>degree(n,0);
        if(n==1){ 
            ans.push_back(0); 
            return ans;
        }
        for(int i=0;i<n;i++)
        {
            vector<int>list;
            adj.push_back(list);
        }
        for(auto e:edges){
            degree[e[0]]++;
            degree[e[1]]++;
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            if(degree[i]==1)
            {
                q.push(i);
            }
        }
        while(n>2)
        {
            int size=q.size();
            n-=size;
            while(size-->0)
            {
                int curr=q.front();
                q.pop();
                for(auto i:adj[curr])
                {
                    degree[i]--;
                    if(degree[i]==1)
                    {
                        q.push(i);
                    }
                }
            }
        }
        while(!q.empty())
        {
            int x=q.front();
            ans.push_back(x);
            q.pop();
            
        }
        return ans;
    }
};