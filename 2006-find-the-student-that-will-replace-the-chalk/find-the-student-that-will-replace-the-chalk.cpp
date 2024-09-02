class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long sum=0;
        long long n=chalk.size();
        for(auto i:chalk){
            sum+=i;
        }
        long long remSum=k%sum;
        int ind=0;
        for(int i=0;i<n;i++){
            remSum-=chalk[i];
            if(remSum<0){
                ind=i;
                break;
            }
        }
        return ind;
        
    }
};