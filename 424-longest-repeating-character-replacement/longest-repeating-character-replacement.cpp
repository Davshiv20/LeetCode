class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int maxLen=INT_MIN;
        int l=0;
        for(int r=0;r<s.size();r++)
        {
            mp[s[r]]++;
            int maxCharCount=0;
            for(auto i:mp)
            {
                maxCharCount=max(maxCharCount,i.second);
            }
            while(r-l+1-maxCharCount>k)
            {
                mp[s[l]]--;
                l++;
            }
            maxLen=max(maxLen,r-l+1);
        }
        return maxLen;
        
        
    }
};