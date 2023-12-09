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
    string tree2str(TreeNode* root) {
        if(root==NULL)
        {
            return "";
        }
        string ans=to_string(root->val);
        string Left=tree2str(root->left);
        string Right=tree2str(root->right);
        if(root->left==NULL and root->right==NULL)
        {
            return ans;
        }
        if(root->left==NULL)
        {
            return ans+"()"+"("+Right+")";
        }
        if(root->right==NULL)
        {
            return ans+"("+Left+")";
        }
        return ans+"("+Left+")"+"("+Right+")";
          

    }
};