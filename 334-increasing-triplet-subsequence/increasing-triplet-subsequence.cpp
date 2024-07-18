class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX, second = INT_MAX;
        for (int num : nums) {
            if (num <= first) {
                first = num; // update first if num is smaller
            } else if (num <= second) {
                second = num; // update second if num is between first and second
            } else {
                // if we find a number greater than both first and second, we have found our triplet
                return true;
            }
        }
        return false;
    }
};
