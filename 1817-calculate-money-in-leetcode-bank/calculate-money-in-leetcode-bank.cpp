class Solution {
public:
    int totalMoney(int n) {
       int a=n%7;
       int b=n/7;
       int ans=0;
       int i=0;
       int s=0;
       int m;
       if(b==0)
       {
           ans+=((n)*(n+1))/2;
       }
       else
       {
           while(i!=b)
           {
              
               ans+=28+s;
               s+=7;
               i++;
           }
             
            if(a>0 && a<7)
            {
                ans+=((a)*(a+1))/2;
                ans+=a*b;
            }
       }
       
       return ans;
    }
};