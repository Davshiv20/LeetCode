class Solution {
public:
    string compressedString(string word) {
        string res="";
        char ch=word[0];
        for(int i=1;i<word.size()+1;i++){
            int count=1;
            while(word[i]==ch && i<=word.size() && count<9){

               count++;
               i++;
                // ch=word[i];
            }
            // cout<<(count)<<endl;
            res+=to_string(count);
            res+=ch;
            ch=word[i];
        }
        return res;
    }
};