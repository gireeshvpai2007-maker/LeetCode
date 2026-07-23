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
public: int getnum(TreeNode* root,int curr)
{
     if(root == NULL)
    return 0;
    curr=curr*10+root->val;
    if(root->left==NULL&&root->right==NULL)
    {
        return curr ;
    }
   
return getnum(root->left,curr)+getnum(root->right,curr);
   
}
    int sumNumbers(TreeNode* root) {
   int sum=0,curr=0;
   curr=getnum(root,curr);
   sum+=curr;
    return sum;
    }
   
};