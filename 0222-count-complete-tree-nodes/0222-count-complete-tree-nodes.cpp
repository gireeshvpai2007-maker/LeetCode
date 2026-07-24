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
    vector<int >Nodes(TreeNode* root) {
      vector<int>ans;
        if(root==NULL)
        {
            return ans;
        }
        ans.push_back(root->val);
      vector<int>left = Nodes(root->left);
        ans.insert(ans.end(),left.begin(),left.end());
     vector<int>right=Nodes(root->right);
    ans.insert(ans.end(),right.begin(),right.end());
   return ans;
    }
    int countNodes(TreeNode* root)
    {
        vector<int>ans=Nodes(root);
        return ans.size();
    }
};