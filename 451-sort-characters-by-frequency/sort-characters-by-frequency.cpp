class Solution {
public:
    int comp(int a,int b)
    {
        return a>b;
    }
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(auto i:s)
        {
            mp[i]++;
        }
        string res="";
        vector<pair<char, int>> elems(mp.begin(), mp.end());
  sort(elems.begin(), elems.end(), [](pair<char, int> a, pair<char, int> b) {
            return a.second > b.second;
        });
        for(auto i:elems)
        {
            cout<<"letter:"<<i.first<<" ";
            cout<<"freq:"<<i.second<<endl;
            while(i.second--)
            {
                res+=i.first;
            }
        }
        return res;
    }
};