
class Solution {
public:
    int prevVal;
    int count = 0;
    int high = 0;
    bool first = true;
    vector<int> ans;

    void inorder(TreeNode* root) {
        if (root == NULL)
            return;

        inorder(root->left);

        if (first || root->val != prevVal) {
            prevVal = root->val;
            count = 1;
            first = false;
        } else {
            count++;
        }

        if (count > high) {
            high = count;
            ans.clear();
            ans.push_back(root->val);
        } else if (count == high) {
            ans.push_back(root->val);
        }

        inorder(root->right);
    }

    vector<int> findMode(TreeNode* root) {
        inorder(root);
        return ans;
    }
};
