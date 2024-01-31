class Solution
{
public:
    // Global variables to keep track of pseudo-palindromic paths and digit frequencies
    int paths = 0, frequency[10];

    // Recursive function to perform inorder traversal of the binary tree
    void inorder(TreeNode *r)
    {
        // Base case: If the current node is NULL, return
        if (r == NULL)
            return;

        // If the current node is a leaf node (both left and right children are NULL)
        if ((r->left == NULL) && (r->right == NULL))
        {
            // Increment the frequency of the digit at the current node
            frequency[r->val]++;

            // Count the number of digits with odd frequencies
            int odd = 0;
            for (int i = 0; i < 10; i++)
                odd += (frequency[i] & 1);

            // If the count of odd frequencies is less than 2, increment the global variable paths
            if (odd < 2)
                paths++;

            // Decrement the frequency of the digit at the current node (backtrack)
            frequency[r->val]--;

            // Return from the function
            return;
        }

        // If the current node is not a leaf node
        // Increment the frequency of the digit at the current node
        frequency[r->val]++;

        // Recursively call inorder for the left and right children
        inorder(r->left);
        inorder(r->right);

        // Decrement the frequency of the digit at the current node (backtrack)
        frequency[r->val]--;
    }

    // Main function to calculate pseudo-palindromic paths
    int pseudoPalindromicPaths(TreeNode *root)
    {
        // Call the inorder function to traverse the binary tree
        inorder(root);

        // Return the final count of pseudo-palindromic paths
        return paths;
    }
};