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
    bool checkSum(int sum, int targetSum, TreeNode* root) {
        if(!root){
            return false;
        }
        
        sum += root->val;
        if(!root->left && !root->right)
        {
            return targetSum==sum;
        }
        return checkSum(sum,targetSum,root->left) || checkSum(sum,targetSum,root->right);
    }
    bool hasPathSum(TreeNode* root, int targetSum) { 
        int sum = 0;
        return checkSum(sum,targetSum,root);
     }
};