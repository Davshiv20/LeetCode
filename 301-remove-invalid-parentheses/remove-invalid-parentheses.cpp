class Solution {
public: 
   bool isValid(string s) {
    int count = 0;
    for (char c : s) {
        if (c == '(') count++;
        if (c == ')') count--;
        if (count < 0) return false; // More closing than opening
    }
    return count == 0; // All open parentheses are closed
   }
    
    vector<string> removeInvalidParentheses(string s) {
        vector<string>res;
        unordered_set<string>visited;
        queue<string>q;
        q.push(s);
        visited.insert(s);
        bool found=false;
        while(!q.empty())
        {
            string chk=q.front();
            q.pop();
            if(isValid(chk))
            {
                found=true;
                res.push_back(chk);
            }
            if(found) continue;
            for(int i=0;i<chk.size();i++)
            {
                if(chk[i]!=')' && chk[i]!='('){
                    continue;
                }
                string next=chk.substr(0,i)+chk.substr(i+1);
                if(visited.find(next)==visited.end())
                {
                    q.push(next);
                    visited.insert(next);
                }
            }
        }
        return res;
        
        
    }
};