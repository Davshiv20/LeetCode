class Solution {
public:
    int firstUniqChar(string s) {
        int ans[26]={0};
        int j=0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            int index=s[i]-'a';
            ans[index]++;
        }
        int ind;
        int i=0;
        while(i<s.length())
        {
            int count=s[i]-'a';
            if(ans[count]==1)
            {
                ind=i;
                break;
            }
            else
            {
                ind=-1;
            }
            i++;

        }
        return ind;

    }
};