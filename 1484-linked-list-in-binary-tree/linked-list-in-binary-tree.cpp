class Solution {
public:
    bool isPath(ListNode* head, TreeNode* root) {
        if (head == NULL) {
            return true; // The linked list is fully traversed.
        }
        if (root == NULL) {
            return false; // The binary tree has ended, and the list is not fully matched.
        }
        if (head->val != root->val) {
            return false; // Values do not match.
        }
        
        // Continue searching in both left and right subtrees.
        return isPath(head->next, root->left) || isPath(head->next, root->right);
    }
    
    bool isSubPath(ListNode* head, TreeNode* root) {
        if (head == NULL) {
            return true; 
        }
        if (root == NULL) {
            return false; 
        }
        return isPath(head, root) || isSubPath(head, root->left) || isSubPath(head, root->right);
    }
};
