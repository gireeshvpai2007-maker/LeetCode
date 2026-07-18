class Solution {
public:
    vector<int> tree;

    void orderTraversal(TreeNode* root)
    {
        if(root == NULL)
            return;

        orderTraversal(root->left);
        tree.push_back(root->val);
        orderTraversal(root->right);
    }

    vector<int> inorderTraversal(TreeNode* root)
    {
        tree.clear();          // Good practice
        orderTraversal(root);  // Call the recursive function
        return tree;
    }
};