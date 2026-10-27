
class Solution {
public:
    vector<int> pre(TreeNode* root) {
        vector<int> ans;

        if (root == NULL)
            return ans;

        ans.push_back(root->val);

        vector<int> l = pre(root->left);
        ans.insert(ans.end(), l.begin(), l.end());

        vector<int> r = pre(root->right);
        ans.insert(ans.end(), r.begin(), r.end());

        return ans;
    }

    vector<int> findMode(TreeNode* root) {
        vector<int> ans = pre(root);
        unordered_map<int, int> mp;

        for (int i = 0; i < ans.size(); i++) {
            mp[ans[i]]++;
        }

        vector<int> a;
        int high = 0;

        for (auto p : mp) {
            if (p.second > high)
                high = p.second;
        }

        for (auto p : mp) {
            if (p.second == high)
                a.push_back(p.first);
        }

        return a;
    }
};
