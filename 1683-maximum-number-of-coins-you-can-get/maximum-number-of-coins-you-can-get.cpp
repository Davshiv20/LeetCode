class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int n=piles.size();
        int i=n-2;
        int j=0;
        int ans=0;
        while(i>j)
        {
            ans+=piles[i];
            i-=2;
            j++;
        }
        return ans;
    }
        
};