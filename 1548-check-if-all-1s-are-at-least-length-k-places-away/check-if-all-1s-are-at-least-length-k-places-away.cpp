class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        vector<int>diff;
        bool ones = false;
        int oneIndex =0;
        for(int i = 0;i<nums.size();i++){
            if(!ones && nums[i]==1){
                oneIndex=i;
                ones= true;
            }
            else if(nums[i]==1){
                diff.push_back(i-oneIndex);
                oneIndex=i;
            }
        }
        for(auto i:diff){
            
            if(i<=k){return false;}
        }
        return true;
    }
};