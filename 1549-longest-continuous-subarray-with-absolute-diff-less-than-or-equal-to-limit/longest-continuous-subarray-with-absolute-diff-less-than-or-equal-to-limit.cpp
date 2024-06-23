class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
      deque<int> maxDeque, minDeque;  // Deques to store indices of array elements
        int maxLen = 0;
        int l = 0;

        for (int h = 0; h < nums.size(); h++) {
            // Maintain the deque for maximums
            while (!maxDeque.empty() && nums[maxDeque.back()] <= nums[h]) {
                maxDeque.pop_back();  // Remove elements less than the current element
            }
            maxDeque.push_back(h);  // Add current index at the end of the deque

            // Maintain the deque for minimums
            while (!minDeque.empty() && nums[minDeque.back()] >= nums[h]) {
                minDeque.pop_back();  // Remove elements greater than the current element
            }
            minDeque.push_back(h);  // Add current index at the end of the deque

            // Adjust the window if the condition is violated
            while (nums[maxDeque.front()] - nums[minDeque.front()] > limit) {
                // Move the left pointer to the right
                l++;
                // Remove indices from the deques if they are out of the current window
                if (maxDeque.front() < l) {
                    maxDeque.pop_front();
                }
                if (minDeque.front() < l) {
                    minDeque.pop_front();
                }
            }

            // Update the maximum length of the window
            maxLen = max(maxLen, h - l + 1);
        }

        return maxLen;
    }
};