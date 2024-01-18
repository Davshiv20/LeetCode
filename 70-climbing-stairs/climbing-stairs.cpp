class Solution {
    int term[1000];
public:
    int climbStairs(int n) {
       if(n==0 || n==1)
       {
           return 1;
       }
       if(term[n]!=0)
       {
           return term[n];
       }
       else
       {
        term[n]=climbStairs(n-1)+climbStairs(n-2);
       return term[n];
       }
      
    }
};