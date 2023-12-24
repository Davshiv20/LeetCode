class Solution {
public:
    int minOperations(string s) {
        int n=s.size();
        vector<char>e(n);
        vector<char>o(n);
        if(n%2==0)
        {
            for(int i=0;i<n-1;i+=2)
            {
                e[i]='1';
                e[i+1]='0';
            }
            for(int i=0;i<n-1;i+=2)
            {
                o[i]='0';
                o[i+1]='1';
            }
        }
        else
        {
            for(int i=0;i<n-2;i+=2)
            {
                e[i]='1';
                e[i+1]='0';
            }
            for(int i=0;i<n-2;i+=2)
            {
                o[i]='0';
                o[i+1]='1';
            }
            e[n-1]='1';
            o[n-1]='0';
        }
        for(auto i:e)
        {
            cout<<i<<" ,";
        }
        cout<<endl;
        for(auto i:o)
        {
            cout<<i<<" ,";
        }
        int mini=0;
        int c1=0;
        int c2=0;
        
        for(int i=0;i<n;i++)
        {
            int ia=e[i]-'0';
            int ib=s[i]-'0';
            int ic=o[i]-'0';
            int diff1=abs(ia-ib);
            cout<<diff1<<endl;
            c1+=diff1;
            int diff2=abs(ic-ib);
            c2+=diff2;
            mini=min(c1,c2);
        }
        return mini;
        
    }
};