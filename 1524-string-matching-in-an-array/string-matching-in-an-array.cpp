class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        set<string>res;
        
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words.size();j++){
                if(i!=j){
                    if(words[j].find(words[i])!=std::string::npos){
                        res.insert(words[i]);
                    }
                }
            }
        } 
        return vector<string>(res.begin(),res.end());
    }
};