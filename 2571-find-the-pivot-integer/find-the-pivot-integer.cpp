class Solution {
public:
    int pivotInteger(int n) {
        int k=n;
        while(n>0)
        {
            int sum1=(n*(n+1))/2;
            cout<<"sum1:"<<sum1<<endl;
            int sum2=(k*(k+1))/2-sum1+n;
            cout<<"sum2:"<<sum2<<endl;
            if(sum2==sum1)
            {
                return n;
            }
            n=n-1;
        }    
        return -1;
    }
};