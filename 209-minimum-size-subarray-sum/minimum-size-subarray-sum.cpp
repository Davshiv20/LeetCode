class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int maxLen = INT_MAX;
        int l = 0;
        int r = 0;
        bool chk = false;
        for (r = 0; r < nums.size(); r++) {
            sum += nums[r];

            while (sum >= target) {
                if(sum>=target) maxLen = min(r - l + 1, maxLen);
                sum -= nums[l];
                l++;
                

                chk = true;
            }
            if (chk && sum >= target) {
            }
            cout << "r: " << r << " l: " << l << endl;
        }

        if (!chk) {
            return 0;
        }
        cout << endl;
        return maxLen;
    }
};