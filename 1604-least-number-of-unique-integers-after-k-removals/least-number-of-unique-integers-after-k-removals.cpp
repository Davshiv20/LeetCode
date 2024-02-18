class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        // for(auto i:mp)
        // {
        //     cout<<i.first<<": "<<i.second<<endl;
        // }
        // cout<<endl;
        // return 1;
        vector<int>remov;
        for(auto i:mp)
        {
            remov.push_back(i.second);
        }
        sort(remov.begin(),remov.end());
        int i=0;
          while (i < remov.size() && k > 0) {
            if (k >= remov[i]) {
                k -= remov[i];
                i++;
            } else {
                break;
            }
        }

        return remov.size() - i;
    }
};