class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<long long>degree(n,0);
        for(vector<int>road:roads)
        {
            degree[road[0]]++;
            degree[road[1]]++;
        }
        sort(degree.begin(),degree.end());
        long long ans=0;
        long long val=1;
        for(long long i:degree)
        {
            ans+=(val*i);
            val++;
        }
        return ans;
    }
};