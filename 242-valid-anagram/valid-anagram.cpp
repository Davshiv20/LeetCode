class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()==t.length())
        {
        int arr[26]={0};
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            int num=ch-'a';
            arr[num]++;
        }
        int rar[26]={0};
        for(int i=0;i<t.length();i++)
        {
            char ch=t[i];
            int num=ch-'a';
            rar[num]++;
        }
        bool flag=true;
        for(int i=0;i<26;i++)
        {
            if(arr[i]!=rar[i])
            {
                flag=false;
                break;
            }
            else
            {
               
                flag;
            }
        }
        return flag;
        }
        else
        {
            return false;
        }
    }
};