class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
       vector<int>trustGiven(n+1,0);
       vector<int>trustTaken(n+1,0);
       for(auto i:trust)
       {
           trustGiven[i[0]]++;
           trustTaken[i[1]]++;
       } 
       for(int i=1;i<=n;i++)
       {
           if(trustGiven[i]==0 && trustTaken[i]==n-1)
           {
               return i;
           }
       }
       return -1;
    }
};