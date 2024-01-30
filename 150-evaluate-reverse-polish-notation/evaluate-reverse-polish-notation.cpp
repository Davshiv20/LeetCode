class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>p;
        for(auto &i:tokens)
        {
            if(i != "+" && i != "-" && i != "/" && i != "*")
            {
                p.push(stoi(i));
            }
            else{
                int x=p.top();
                p.pop();
                if(i=="+")
                {
                    p.top()+=x;
                }
                else if(i=="-")
                {
                    p.top()-=x;
                }
                else if(i=="*")
                {
                    p.top()*=x;
                }
                else{
                    p.top()/=x;
                }
                x=p.top();
                p.pop();
                p.push(x);
            }
        }
        return p.top();
        
    }
};