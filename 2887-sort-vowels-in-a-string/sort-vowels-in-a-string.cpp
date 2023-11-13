class Solution {
public:
    string sortVowels(string s) {
        vector<char>vowels;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                vowels.push_back(s[i]);
            }
        }
        sort(vowels.begin(),vowels.end());
        int j=0;
        for(int i=0;i<s.size()&& j<vowels.size();i++ )
        {
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                s[i]=vowels[j];
                j++;
            }
        }

        return s;
    }
};