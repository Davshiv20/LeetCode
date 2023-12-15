class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int>map;
        for(int i=0;i<paths.size();i++)
        {
            for(int j=0;j<2;j++)
            {
                map[paths[i][j]]++;
                if(j==0)
                {
                    map[paths[i][j]]+=1;
                }
            }
        }
        string ans;
        for(auto i:map)
        {
            if(i.second==1)
            {
                ans=i.first;
            }
        }
        return ans;
    }
};