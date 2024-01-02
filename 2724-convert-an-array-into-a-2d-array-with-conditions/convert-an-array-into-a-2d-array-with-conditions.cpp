class Solution {
public:
   
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>>ans;
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++)
        {
            int freq=map[nums[i]];
            if(freq==ans.size())
            {
                ans.push_back({});
            }
            ans[freq].push_back(nums[i]);
            map[nums[i]]++;
        }
        return ans;

    }
};