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
    // int depth(TreeNode* root)
    // {
    //     if(root==NULL)
    //    {
    //        return 0;
    //    }
    //    int h1=depth(root->left);
    //    int h2=depth(root->right);
    //    return 1+max(h1,h2);
    // }
    void levelOrder(TreeNode* root, vector<vector<int>>&ans)
    {
        queue<TreeNode*>q;
        if(!root) return;
        q.push(root);
        while(!q.empty())
        {
           int ls=q.size();
           vector<int>level;
           while(ls--)
           {
               TreeNode* temp=q.front();
               level.push_back(temp->val);
               q.pop();
               if(temp->left)
               {
                   q.push(temp->left);

               }
               if(temp->right)
               {
                   q.push(temp->right);
               }
           }
           ans.push_back(level);
        }
       
    }
    int findBottomLeftValue(TreeNode* root) {
        vector<vector<int>>ans;
        levelOrder(root,ans);
        return ans[ans.size()-1][0];
        
       
    }
};