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
    int findH(TreeNode* root, int h) {
        if (!root)
            return 0;
        return 1 + max(findH(root->left, h), findH(root->right, h));

    }
    int maxDepth(TreeNode* root) {
        int h = 0;

        return findH(root, h); 

    }
};