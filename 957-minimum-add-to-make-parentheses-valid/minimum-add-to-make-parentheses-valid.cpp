class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>stk;
        for(auto i:s){
            if(stk.empty()){
                stk.push(i);
            }
            else if(i==')' && stk.top()=='('){
                stk.pop();
            }
            else{
                stk.push(i);
            }
        }
        return stk.size();
    }
};