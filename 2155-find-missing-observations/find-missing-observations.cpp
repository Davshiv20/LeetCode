class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        vector<int>res;
        int s=rolls.size();
        int totSize=s+n;
        int sum=0;
        for(auto i:rolls){
            sum+=i;
        }
        int totSum=mean*(totSize);
        int remSum=totSum-sum;
        if(remSum> 6*n || remSum<n){
            return res;
        }
       int dMean=remSum/n;
       int m=remSum%n;
       vector<int>dm(n,dMean);
       for(int i=0;i<m;i++){
        dm[i]+=1;
       }
       return dm;

    }
};