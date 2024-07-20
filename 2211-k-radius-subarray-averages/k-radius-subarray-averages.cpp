class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
      int n = nums.size();
        vector<int> avg(n, -1);
        long long sum = 0;

        // If the window size is larger than the array length, return avg
        if (2 * k + 1 > n) {
            return avg;
        }

        // If k is 0, return nums as the result
        if (k == 0) {
            return nums;
        }

        // Calculate the sum for the initial window
        for (int i = 0; i < 2 * k + 1 && i < n; i++) {
            sum += nums[i];
        }

        avg[k] = sum / (2 * k + 1);

        // Slide the window
        for (int i = k + 1; i < n - k; i++) {
            sum -= nums[i - k - 1];
            sum += nums[i + k];
            avg[i] = sum / (2 * k + 1);
        }

        return avg;
    }
};