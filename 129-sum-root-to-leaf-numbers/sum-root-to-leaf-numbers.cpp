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
    int sumNumbers(TreeNode* root) {
        if (!root)
            return 0;
        queue<TreeNode*> q;
        q.push(root);
        int res = 0;
        while (!q.empty()) {
            TreeNode* v = q.front();
            q.pop();
            if (v->left == NULL && v->right == NULL) {
                res += v->val;
            } else {
                if (v->left) {
                    v->left->val += (v->val) * 10;
                    q.push(v->left);
                }
                if (v->right) {
                    v->right->val += (v->val) * 10;
                    q.push(v->right);
                }
            }
        }
        return res;
    }
};