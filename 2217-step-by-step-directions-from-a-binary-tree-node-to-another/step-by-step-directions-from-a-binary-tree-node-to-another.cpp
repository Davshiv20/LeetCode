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
    TreeNode* getAncestor(TreeNode* root, int startValue, int destValue)
    {
        if(root==NULL || startValue==root->val || destValue==root->val)
        {
            return root;
        }
        TreeNode* left=getAncestor(root->left,startValue,destValue);
        TreeNode* right=getAncestor(root->right,startValue,destValue);
        if(left==NULL)
        {
            return right;
        }
        if(right==NULL)
        {
            return left;
        }
        else{
            return root;
        }

    }
    bool findPath(TreeNode* LCA, int target, string& path)
    {
        if(LCA==NULL)
        {
            return false;
        }
        if(LCA->val==target)
        {
            return true;
        }
        path.push_back('L');
        if( findPath(LCA->left,target,path))
        {
           return true;
        }
        path.pop_back();
        path.push_back('R');
        if(findPath(LCA->right,target,path))
        {
            return true;
        }
        path.pop_back();
        return false;
    }
    string getDirections(TreeNode* root, int startValue, int destValue) {
        TreeNode* LCA=getAncestor(root,startValue,destValue);
        string sTs="";
        string sTd="";
        findPath(LCA,startValue,sTs);
        findPath(LCA,destValue,sTd);
        string gb="";
        for(int i=0;i<sTs.size();i++)
        {
            gb+='U';
        }
        gb+=sTd;
        return gb;
        
        
    }
};