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
    TreeNode* solve(int start, int end, vector<int>& preorder, vector<int>& inorder, int &idx){
        if(start>end){
            return NULL;
        }
        int rootVal=preorder[idx];
        int ind=0;
        for(int i=start;i<=end;i++){
            if(inorder[i]==rootVal){
                ind=i;
                break;
            }
        }
        idx++;
        TreeNode* root=new TreeNode(rootVal);
        root->left=solve(start,ind-1,preorder,inorder,idx);
        root->right=solve(ind+1,end,preorder,inorder,idx);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=inorder.size();
        int idx=0;
        return solve(0,n-1,preorder,inorder,idx);
    }
};