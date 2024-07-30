/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void findSum(TreeNode* root, long long sum, long long targetSum, int& count,
                 unordered_map<long long, int> &mp) {
        if (!root)
            return;
        sum += root->val;
          if (sum == targetSum) {
            count++;
        }
        if (mp.find(sum - targetSum) != mp.end()) {
            count += mp[sum - targetSum];
        }

        mp[sum]++;

        findSum(root->left, sum, targetSum, count, mp);
        findSum(root->right, sum, targetSum, count, mp);
           mp[sum]--;
    }
    int pathSum(TreeNode* root, int targetSum) {
       
        int count = 0;
        long sum = 0;
        unordered_map<long long, int> mp;
        
       

        findSum(root, 0, targetSum, count, mp);
        
        return count;
        // if(count==0) return count;
        // return count+1;
    }
};