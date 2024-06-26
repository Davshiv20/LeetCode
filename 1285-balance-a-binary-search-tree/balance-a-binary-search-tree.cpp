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
    void Inorder(TreeNode* root,vector<int> &sortedArr)
    {
        if(root==NULL) return;
        Inorder(root->left,sortedArr);
        sortedArr.push_back(root->val);
        Inorder(root->right,sortedArr);

    }
    TreeNode* balance(vector<int>& sortedArr,int start,int end)
    {
        if(start>end)
        {
            return NULL;
        }
        int mid=start+(end-start)/2;
        TreeNode* newRoot=new TreeNode(sortedArr[mid]);
        // if(sortedArr[mid]>newRoot->val)
        // {
        //     TreeNode* rightNode=new TreeNode();
        //     rightNode->val=sortedArr[mid];
        //     newRoot->right=rightNode;
        //     balance(rightNode,sortedArr,mid);
        // }
        // else{
        //     TreeNode* leftNode=new TreeNode();
        //     leftNode->val=sortedArr[mid];
        //     newRoot->left=leftNode;
        //     balance(leftNode,sortedArr,mid);
        // }
        newRoot->left=balance(sortedArr,start,mid-1);
        newRoot->right=balance(sortedArr,mid+1,end);
        return newRoot;
        
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>sortedArr;
        Inorder(root,sortedArr);
        int n=sortedArr.size();
        // TreeNode* newRoot=new TreeNode();
        // int mid=n/2;
        // newRoot->val=sortedArr[mid];
       return  balance(sortedArr,0,sortedArr.size()-1);
        //return newRoot;
    }
};