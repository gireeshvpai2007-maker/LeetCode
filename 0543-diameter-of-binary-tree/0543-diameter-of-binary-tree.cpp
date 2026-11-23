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
    int diameterOfBinaryTree(TreeNode* root) {
        int maxDiameter = 0;
        height(root, maxDiameter);
        return maxDiameter;
    }

private:
    int height(TreeNode* node, int& maxDiameter) {
        if (node == nullptr) {
            return 0;
        }

        int leftH = height(node->left, maxDiameter);
        int rightH = height(node->right, maxDiameter);

        // Longest path passing through the current node uses leftH + rightH edges
        maxDiameter = max(maxDiameter, leftH + rightH);

        // Return height (in nodes/edges down to deepest leaf) to parent
        return 1 + max(leftH, rightH);
    }
};