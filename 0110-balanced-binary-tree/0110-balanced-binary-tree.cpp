class Solution {
public:
    int checkHeight(TreeNode* root) {
        if (root == nullptr)
            return 0;

        int leftHeight = checkHeight(root->left);
        if (leftHeight == -1)
            return -1;  // Left subtree is unbalanced

        int rightHeight = checkHeight(root->right);
        if (rightHeight == -1)
            return -1;  // Right subtree is unbalanced

        if (abs(leftHeight - rightHeight) > 1)
            return -1;  // This node is unbalanced

        return 1 + max(leftHeight, rightHeight);
    }

    bool isBalanced(TreeNode* root) {
        return checkHeight(root) != -1;
    }
};