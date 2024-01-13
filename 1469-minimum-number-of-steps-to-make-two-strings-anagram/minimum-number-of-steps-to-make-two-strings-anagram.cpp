class Solution {
public:
    int minSteps(string s, string t) {
        int n=s.size();
        vector<int>hash1(27);
        vector<int>hash2(27);
        for(int i=0;i<n;i++)
        {
            hash1[s[i]-'a']++;
            hash2[t[i]-'a']++;
        }
        int count=0;
        for(int i=0;i<27;i++)
        {
            if((hash1[i]-hash2[i])>0)
            {
                count+=hash1[i]-hash2[i];
            }
        }
        return count;
        

        
    }
};