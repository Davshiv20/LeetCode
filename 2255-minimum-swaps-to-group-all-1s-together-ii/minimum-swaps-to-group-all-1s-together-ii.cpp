class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        
        // Count the number of 1s in the array
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                count++;
            }
        }
        
        // If count of 1s is 0 or the entire array is full of 1s
        if (count == 0 || count == n) return 0;
        
        // Sliding window to find the minimum number of zeros in a window of size `count`
        int zeros = 0, minZeros = INT_MAX;
        for (int i = 0; i < count; i++) {
            if (nums[i] == 0) {
                zeros++;
            }
        }

        minZeros = zeros;
        for (int i = count; i < n + count; i++) {
            if (nums[i % n] == 0) {
                zeros++;
            }
            if (nums[(i - count) % n] == 0) {
                zeros--;
            }
            minZeros = min(minZeros, zeros);
        }

        return minZeros;
    }
};
