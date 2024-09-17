class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        stringstream s(s1);
        stringstream ss(s2);
        string h;
        string w;
        unordered_map<string,int>mp;
        while(s>>w){
            mp[w]++;
        }
        while(ss>>h){
            mp[h]++;
        }
        vector<string>res;
        for(auto i:mp){
            if(i.second==1){
                res.push_back(i.first);
            }
        }
        return res;

        
    }
};