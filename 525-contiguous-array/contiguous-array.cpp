class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int prefixSum=0;
        int maxi=0;
        unordered_map<int, int> mp = {{0, -1}};
        for(int i=0;i<nums.size();i++)
        {
            prefixSum+=nums[i]==1?1:-1;
            if(mp.count(prefixSum))
            {
                maxi=max(maxi,i-mp[prefixSum]);
            }
            else{
                mp[prefixSum]=i;
            }
        }
        return maxi;
    }
};