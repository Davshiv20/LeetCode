class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        if (!root) return 0;

        queue<TreeNode*> q;
        q.push(root);
        
        int level = 1;
        int maxSum = INT_MIN;
        int maxLevel = 1;

        while (!q.empty()) {
            int sz = q.size();
            int sum = 0;

            for (int i = 0; i < sz; ++i) {
                TreeNode* curr = q.front();
                q.pop();
                sum += curr->val;

                if (curr->left) {
                    q.push(curr->left);
                }
                if (curr->right) {
                    q.push(curr->right);
                }
            }

            if (sum > maxSum) {
                maxSum = sum;
                maxLevel = level;
            }

            ++level;
        }

        return maxLevel;
    }
};
