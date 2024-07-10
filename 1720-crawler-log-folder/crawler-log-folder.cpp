class Solution {
public:
    int minOperations(vector<string>& logs) {
        int op=0;
        for(int i=0;i<logs.size();i++)
        {
            if(logs[i]=="./")
            {
                op+=0;
            }
            else if(logs[i]=="../")
            {
                op--;
                op=max(op,0);
                cout<<op<<" "<<endl;
            }
            else{
                op++;
            }
        }
        return op;
        
    }
};