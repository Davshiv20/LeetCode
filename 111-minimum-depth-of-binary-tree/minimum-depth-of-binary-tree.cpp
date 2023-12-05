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
    void mind(TreeNode* root,vector<int>& ans,int& sum)
    {
        if(root->left==NULL and root->right==NULL) 
        {
            ans.push_back(sum);
            return;
        }
        int sum1=sum;
        int sum2=sum;
        if(root->left)
        {
            sum1+=1;
            mind(root->left,ans,sum1);
        }
        if(root->right)
        {
            sum2+=1;
            mind(root->right,ans,sum2);
        }
    }

    
    int minDepth(TreeNode* root) {
        vector<int>ans;
        int sum=0;
        if(root==NULL)
        {
            return 0;
        }
        mind(root,ans,sum);
        sort(ans.begin(),ans.end());
        return 1+ans[0];
        
    }
};