class Solution {
public:
    string reversePrefix(string word, char ch) {
        int ind=0;
        for(int i=0;i<word.size();i++)
        {
            if(word[i]==ch)
            {
                ind=i;
                break;
            }
        }
        string str=word.substr(0,ind+1);
        string rem=word.substr(ind+1,word.size()-ind);
        reverse(str.begin(),str.end());
        str+=rem;
        return str;
    }
};