class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n=values.size();
        vector<int>res(n+1,0);
        res[0]=values[0]+0;
        for(int i=1;i<n;i++){
            res[i]=max(res[i-1],values[i]+i);
        }
        int result=0;
        for(int i=1;i<n;i++){
            int x=values[i]-i;
            int y=res[i-1];
            result = max(result, x+y);
        }
        return result;
    }
    
};