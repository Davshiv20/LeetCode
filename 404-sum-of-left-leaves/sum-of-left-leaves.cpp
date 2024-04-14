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
    int sumOfLeftLeaves(TreeNode* root) {
            // if root is NULL or does not have child nodes
        if(!root || (!root->left and !root->right)) return 0;
        int sum = 0;
        queue<pair<TreeNode* ,bool>>q; 
        // queue< Node , left_child:TRUE/right_child:FALSE >
        q.push({root,false});
        while(!q.empty()){
            int size = q.size();
            for(int i=0;i<size;i++){
                auto node = q.front().first;
                bool found = q.front().second;
                q.pop();
                // if 'root' is a leaf node and a left child descendant 
                // ie 'found' = true
                if(!node->left && !node->right && found)
                    sum += node -> val;
                
                if(node -> left) q.push({node -> left , true});
                if(node -> right) q.push({node -> right , false});
            }
        }

        return sum;
        
        
    }
};