class Solution {
public:
    string compressedString(string word) {
        string comp="";
        char currChar=word[0];
        for(int i=1;i<word.size()+1;i++)
        {
      
           int count=1;
           while(word[i]==currChar && i<=word.size() && count<9)
           {
                i++;
                count++;
               
           }
           comp+=to_string(count);
           comp+=currChar;
           currChar=word[i];
        }
        return comp;
    }
};