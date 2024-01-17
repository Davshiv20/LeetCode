class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        map<int,int>mp2;
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            mp2[i->second]++;
        }
        for(auto i=mp2.begin();i!=mp2.end();i++)
        {
            if(i->second>1)
            {
                return false;
            }
        }
        return true;
        
    }
};