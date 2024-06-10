class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int ans=0;
        vector<int>n=heights;
        
        sort(n.begin(),n.end());
        for(int i=0;i<heights.size();i++)
        {
            if(heights[i]!=n[i])
            {
                ans++;
            }
        }
        return ans;
    }
};