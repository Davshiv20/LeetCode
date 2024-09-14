class Solution {
public:
    long long findMaximumScore(vector<int>& nums) {
        int n = nums.size();
        long long maxi = 0;
        pair<int, int> curr = {nums[0], 1};
        long long score = 0;
        bool check = false;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > curr.first) {
                // Cast to long long before multiplication
                score += (long long)(i + 1 - curr.second) * (long long)curr.first;
                curr.first = nums[i];
                curr.second = i + 1;
                if (i == n - 1) {
                    check = true;
                } 
            }
        }

        if (!check) {
            // Cast to long long here as well
            score += (long long)(n - curr.second) * (long long)curr.first;
        }

        return score;
    }
};
