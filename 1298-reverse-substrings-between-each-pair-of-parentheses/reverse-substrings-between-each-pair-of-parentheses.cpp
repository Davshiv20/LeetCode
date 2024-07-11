class Solution {
public:
    string reverseParentheses(string s) {
       stack<int>stk;
       string res="";
       for(auto i:s)
       {
            if(i=='(')
            {
                stk.push(res.length());
            }
            else if(i==')'){
                int r=stk.top();
                stk.pop();
                reverse(res.begin()+r,res.end());
            }
            else{
                res.push_back(i);
            }
       } 
       
    return res;       
    }
};