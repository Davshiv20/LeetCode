class Solution {
public:
    int robber(vector<int>& nums, vector<int>& dp, int i) {
        if (i < 0) {
            return 0;
        }
        if (dp[i] != -1) {
            return dp[i];
        }
        dp[i] = max(robber(nums, dp, i - 2) + nums[i], robber(nums, dp, i - 1));
        return dp[i];
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            return nums[0];
        }
        if (n == 2) {
            return max(nums[0], nums[1]);
        }
        vector<int> nums1;
        vector<int> dp1(n, -1);
        vector<int> dp2(n, -1);
        for (int i = 1; i < nums.size(); i++) {
            nums1.push_back(nums[i]);
        }
        return max(robber(nums, dp1, n - 2), robber(nums1, dp2, n - 2));
    }
};