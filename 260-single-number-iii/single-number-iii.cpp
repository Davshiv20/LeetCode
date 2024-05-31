class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto num:nums)
        {
            mp[num]++;
        }
        vector<int>ans;
        for(auto i:mp)
        {
            if(i.second==1)
            {
                ans.push_back(i.first);
            }

        }
        return ans;
    }
};