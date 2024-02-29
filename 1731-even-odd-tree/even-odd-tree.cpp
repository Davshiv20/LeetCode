#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        if (!root)
            return true;

        queue<TreeNode*> q;
        q.push(root);
        int level = 0;

        while (!q.empty()) {
            int size = q.size();
            int prev_val = level % 2 == 0 ? INT_MIN : INT_MAX;

            for (int i = 0; i < size; ++i) {
                TreeNode* node = q.front();
                q.pop();
                if ((level % 2 == 0 &&
                     (node->val % 2 == 0 || node->val <= prev_val)) ||
                    (level % 2 == 1 &&
                     (node->val % 2 != 0 || node->val >= prev_val))) {
                    return false;
                }

                prev_val = node->val;
                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }

            ++level;
        }

        return true;
    }
};
