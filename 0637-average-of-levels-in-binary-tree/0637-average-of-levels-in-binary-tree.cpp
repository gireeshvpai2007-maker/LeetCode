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
 #include <queue>
 class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
       std::queue<TreeNode*> q;
        q.push(root);
    vector<double>ans;
   
        if(root == NULL)
            return ans;
        while (!q.empty()) 
        {
            int n=q.size();
            double sum=0;
            double avg;
            for(int i=0;i<n;i++)
            {
                struct TreeNode *temp=q.front();q.pop();
                sum+=temp->val;
                if(temp->left!=NULL)
                   q.push(temp->left);
                if(temp->right!=NULL)
                q.push(temp->right);

            }
            avg=sum/n;
            ans.push_back(avg);
        }
     return ans;   
    }
};