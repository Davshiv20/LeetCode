class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count =0;
        for(auto i:nums){
            int check =0;
            while(i!=0){
                i=i/10;
                check+=1;
            }
            if(check%2==0){
                count+=1;
            }
        }
        return count;
    }
};