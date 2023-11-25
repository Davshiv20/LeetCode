class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        string num=to_string(n);
        bool flag=false;
        int lim=num.size();
        for(int i=num.size()-1;i>0;i--)
        {
            if(num[i-1]>num[i])
            {
                num[i-1]=num[i-1]-1;
                lim=i;
            }
        }
        for(int i=lim;i<num.size();i++)
        {
            num[i]='9';
        }
        
        return stoi(num);
    }
};