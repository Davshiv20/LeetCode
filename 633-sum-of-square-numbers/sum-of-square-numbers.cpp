class Solution {
public:
    bool judgeSquareSum(int c) {
        long long a=0;
        long long b=sqrt(c);
        while(a<=b)
        {
            long long sum=a*a+b*b;
            if(sum>c)
            {
                b--;
            }
            else if(sum<c)
            {
                a++;
            }
            else{
                return true;
            }
        }
        return false;
    }
};