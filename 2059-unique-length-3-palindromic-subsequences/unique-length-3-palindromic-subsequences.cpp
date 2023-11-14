class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_set<char>letters;
        int ans=0;
        for(auto i:s)
        {
            letters.insert(i);
        }
        for(auto l:letters)
        {
            int rightIndex=-1;
            int leftIndex=-1;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]==l)
                {
                    if(leftIndex==-1)
                    {
                        leftIndex=i;
                    }
                    rightIndex=i;
                }
            }
            unordered_set<char>res;
            for(int i=leftIndex+1;i<=rightIndex-1;i++)
            {
                res.insert(s[i]);
            }
            ans+=res.size();
        }
        return ans;
        
    }
};