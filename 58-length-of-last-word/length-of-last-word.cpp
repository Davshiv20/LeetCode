class Solution {
public:
    int lengthOfLastWord(string s) {
        // int n=s.length();
        // if(n>1)
        // {
        // int count=n;
        //  int ans=count;
        // //cout<<"Length is:"<<n<<endl;
        // for(int i=n;i>=0;i--)
        // {
        // if(s[n-1]==' ')
        // {
        //     count--;
        //     n--;
        // }
        // }
        // //cout<<"N is:"<<n<<endl;
        // while(n>1 and s[n-1]!=' ')
        // {
        //     n--;
        // }
        // if(count==ans)
        // {
        //     return count;
        // }
        // else if(count>1)
        // {
        //     return count-n;
        // }
        // else
        //     return n;
        // }
        // else
        // {
        //     return 1;
        // }
        int n=s.length();
        bool flag=false;
        int count=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {   
                count++;
                flag=true;
                
            }
            else if(s[i]==' ' && flag==true)
            {
                break;
            }
        }
        
        return count;
    }
};