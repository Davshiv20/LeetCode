class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        stringstream str(s);
        string temp;
        while(str>>temp)
        {
            reverse(temp.begin(),temp.end());
            ans+=" "+temp;
        }
        reverse(ans.begin(),ans.end());
        return ans.substr(0,ans.size()-1);
    }
};