class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0;
        int sz=pref.size();
        for(int i=0;i<words.size();i++){
            if(words[i].substr(0,sz)==pref){
                count++;
            }
        }
        return count;
        
    }
};