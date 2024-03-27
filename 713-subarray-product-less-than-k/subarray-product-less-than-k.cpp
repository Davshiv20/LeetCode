class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
         int n = nums.size();
        if (k <= 1) return 0; // If k is less than or equal to 1, no subarray can have product less than k
        int l = 0;
        int r = 0;
        int prod = 1;
        int count = 0;
        while (r < n) {
            prod *= nums[r];
            while (prod >= k) {
                prod /= nums[l];
                l++;
            }
            count += r - l + 1; 
            r++;
        }
        return count;        
    }
};