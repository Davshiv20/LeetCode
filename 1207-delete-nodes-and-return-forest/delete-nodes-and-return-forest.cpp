class Solution {
public:
    TreeNode* delNodesHelper(TreeNode* root, unordered_set<int>& to_delete_set, vector<TreeNode*>& res) {
        if (!root) {
            return nullptr;
        }

        root->left = delNodesHelper(root->left, to_delete_set, res);
        root->right = delNodesHelper(root->right, to_delete_set, res);

        if (to_delete_set.find(root->val) != to_delete_set.end()) {
            if (root->left) {
                res.push_back(root->left);
            }
            if (root->right) {
                res.push_back(root->right);
            }
            delete root;
            return nullptr;
        }

        return root;
    }

    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        unordered_set<int> to_delete_set(to_delete.begin(), to_delete.end());
        vector<TreeNode*> res;
        if (root && to_delete_set.find(root->val) == to_delete_set.end()) {
            res.push_back(root);
        }
        delNodesHelper(root, to_delete_set, res);
        return res;
    }
};
