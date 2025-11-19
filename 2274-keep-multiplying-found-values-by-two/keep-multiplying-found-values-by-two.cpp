class Solution {
public:
    bool binSearch(vector<int>&nums, int original){
        int low = 0;
        int high = nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;

            if(nums[mid]==original){
                return true;
            }
            else if(nums[mid]>original){
                high = mid-1;
            }
            else{
                low = mid + 1;
            }
        }
        return false;
    }
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(),nums.end());
        bool found = false;
        found = binSearch(nums,original);

        while(found){
            original = 2*original;
            found = binSearch(nums,original);
        }
        return original;

    }
};