class Solution {
public:
    static bool comp(pair<int,int> a, pair<int,int> b) {
        return a.second < b.second;
    }

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>>maxH; // of value and difference
        for(auto i:arr)
        {
            maxH.push({abs(i-x),i});
            if(maxH.size()> k)
            {
                maxH.pop();
            }
        }    
        vector<int>ans;
        while(!maxH.empty()){
            int x=maxH.top().second;
            ans.push_back(x);
            maxH.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
