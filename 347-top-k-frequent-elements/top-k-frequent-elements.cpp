class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int, int>, vector<pair<int, int>>,
                       greater<pair<int, int>>>
            minH;
        unordered_map<int, int> mp;
        for (auto i : nums) {
           mp[i]++;
        }
        for(auto i:mp){
            minH.push({i.second,i.first});
            if(minH.size()>k)
            {
                minH.pop();
            }
        }
        vector<int> res(k, 0);
        int ind = 0;
        while (ind < k) {

            res[ind++] = minH.top().second ;
            minH.pop();
        }
        return res;
    }
};