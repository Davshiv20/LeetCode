class Solution {
public:
    void solve(string op,vector<string>&res, int open,int closed){
        if(open==0 && closed==0)
        {
            res.push_back(op);
            return;
        }
        if(open!=0)
        {
            string op1=op;
            op1+="(";
            solve(op1,res,open-1,closed);
        }
        if(closed>open)
        {
            string op2=op;
            op2+=")";
            solve(op2,res,open,closed-1);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        int closed=n;
        int open=n;

        string op="";
        solve(op,res,open,closed);
        return res;
    }
};