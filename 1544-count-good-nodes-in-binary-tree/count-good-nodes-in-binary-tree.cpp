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
    void findCount(int root, TreeNode* child, int& count) {
        if (!child) {
            return;
        }
        root=max(root,child->val);
        if (child->val >= root) {
            count += 1;
        }
        findCount(root, child->left, count);
        findCount(root, child->right, count);
    }
    int goodNodes(TreeNode* root) {
        int count = 1;
        findCount(root->val, root->left, count);
        findCount(root->val, root->right, count);
        return count;
    }
};