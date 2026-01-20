class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int>res;
        for(int i = 0;i<nums.size();i++){
            int sol = -1;
            for(int j = 0;j<nums[i];j++){
                int addr=j+1;

                if((j | addr )==nums[i]){

                    sol = j;
                    break;
                }
            }
            res.push_back(sol);
        }
        return res;
    }
};