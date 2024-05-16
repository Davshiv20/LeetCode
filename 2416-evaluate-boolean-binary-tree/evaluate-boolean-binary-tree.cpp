/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool evaluateTree(TreeNode* root) {
         if(root->left == nullptr && root->right == nullptr){
            if(root->val == 0) return false;
            return true;
        }
        // If it's not a leaf node, then go to left subtree
        bool left = evaluateTree(root->left);
        // then go to right subtree
        bool right = evaluateTree(root->right);
        // OR operation
        if(root->val == 2) return left || right;
        return left && right; // AND operation 
    }
};