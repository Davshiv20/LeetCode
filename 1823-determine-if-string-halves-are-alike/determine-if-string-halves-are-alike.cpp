class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size();
        if(n%2!=0)
        {
            return false;
        }
        int half=n/2;
        vector<string>s1;
        int c1=0;
        for(int x=0;x<half;x++)
        {
            if(s[x] == 'a' || s[x] == 'e' ||s[x]== 'i' ||  
        s[x]== 'o' || s[x] == 'u' ||s[x] == 'A' ||  
        s[x] == 'E' || s[x] == 'I' ||s[x] == 'O' ||s[x] == 'U')
        {
            c1++;
        }
        }
        int c2=0;
        for(int x=half;x<s.size();x++)
        {
            if(s[x] == 'a' || s[x] == 'e' ||s[x]== 'i' ||  
        s[x]== 'o' || s[x] == 'u' ||s[x] == 'A' ||  
        s[x] == 'E' || s[x] == 'I' ||s[x] == 'O' ||s[x] == 'U')
        {
            c2++;
        }
        }
        return (c1==c2);
        
    }
};