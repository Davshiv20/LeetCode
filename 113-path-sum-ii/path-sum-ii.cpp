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
    void checkSum(TreeNode* root, vector<int>& r,
                  vector<pair<vector<int>, int>>& v, int sum) {
        if (!root) {
            return;
        }
        sum += root->val;
        r.push_back(root->val);
        if (!root->left && !root->right) {
            v.push_back(make_pair(r, sum));
           
        }
        
        if (root->left) {
            //vector<int>l=r;
            checkSum(root->left, r, v, sum);
        }
        if (root->right) {
            //vector<int>r1=r;
            checkSum(root->right, r, v, sum);
        }
        r.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> res;
        vector<pair<vector<int>, int>> v;
        int sum = 0;
        vector<int> r;
        checkSum(root, r, v, sum);
        for (auto i : v) {
            // cout<<i.first<<endl;
            if (i.second == targetSum) {
                res.push_back(i.first);
            }
        }
        return res;
    }
};