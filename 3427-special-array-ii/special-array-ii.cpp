#include <vector>
using namespace std;

class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int n1 = nums.size();
        int n2 = queries.size();
        
        vector<bool> ans(n2, true);
        vector<int> prefixSum(n1, 0);
        
        if (n1 == 1) {
            return ans; // Single element array is trivially special
        }
        
        // Calculate the prefix sum where prefixSum[i] represents
        // the count of adjacent elements with the same parity up to index i
        for (int i = 1; i < n1; i++) {
            prefixSum[i] = prefixSum[i - 1];
            if (nums[i - 1] % 2 == nums[i] % 2) {
                prefixSum[i]++;
            }
        }
        
        // Process each query
        for (int i = 0; i < n2; i++) {
            int start = queries[i][0];
            int end = queries[i][1];
            
            if (start == end) {
                ans[i] = true; // Single element range is always special
            } else {
                int count=prefixSum[end]-prefixSum[start];
                ans[i]=count>=1?false:true;
            }
        }
        
        return ans;
    }
};
