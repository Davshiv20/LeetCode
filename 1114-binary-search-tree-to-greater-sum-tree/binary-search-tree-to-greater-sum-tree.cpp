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
    void transformTree(TreeNode* root, int* sum)
    {
        if(root==NULL) return;
        transformTree(root->right,sum);
        *sum=*sum+root->val;
        
        root->val=*sum;
        transformTree(root->left,sum);
        
    }
    TreeNode* bstToGst(TreeNode* root) {
        int sum=0;
        transformTree(root,&sum);
        return root;
        
    }
};