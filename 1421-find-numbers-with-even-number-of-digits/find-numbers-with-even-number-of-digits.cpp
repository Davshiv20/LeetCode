class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n= nums.size();
        int res =0;
        for(int i =0;i<n; i++){
            int eve = 0;
            while(nums[i]!=0){
                nums[i]/=10;
                eve ++;
            }
            if(eve%2 ==0){
                res +=1;
            }
        }
        return res;
    }
};