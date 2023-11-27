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
    void levelOrder(TreeNode* root,vector<vector<int>>&ans)
    {
        queue<TreeNode*>q;
        if (!root) return;
        q.push(root);
        while(!q.empty())
        {
            int ls=q.size();
            vector<int>level;
            while(ls--)
            {
                TreeNode* temp=q.front();
                q.pop();
                level.push_back(temp->val);
               
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
      //  return ans;
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
       
        vector<vector<int>>ans;
        levelOrder(root,ans);
        return ans;
    }
};