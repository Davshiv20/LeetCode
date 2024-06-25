class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        int maxLen=0;
        unordered_map<char,int>mp;
        while(r<s.size())
        {
        //     if(mp[s[r]]<=1)
        //     {
                mp[s[r]]++;
              
                // r++;
            // }
            // else{
               while(mp[s[r]]>1)
               {
                mp[s[l]]--;
                l++;
               }
            // }
            maxLen=max(maxLen,r-l+1);
            r++;
        }
        return maxLen;
    }
};