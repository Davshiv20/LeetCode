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
    void diff(TreeNode* curr, int &maxDiff, int currMax,int currMin)
    {
        if(curr==NULL)
        {
            return;
        }
        
        maxDiff=max(maxDiff,abs(curr->val-currMax));
        maxDiff=max(maxDiff,abs(curr->val-currMin));
        currMax=max(curr->val,currMax);
        currMin=min(curr->val,currMin);
        diff(curr->left,maxDiff,currMax,currMin);
        diff(curr->right,maxDiff,currMax,currMin);
    }
    int maxAncestorDiff(TreeNode* root) {
        int maxDiff=0;
        diff(root,maxDiff,root->val,root->val);
        return maxDiff;

        
        
    }
};