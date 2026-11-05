class Solution {
public:
    int maxDepth(Node* root) {
        if (root == nullptr)
            return 0;

        int deepest = 0;

        for (Node* child : root->children) {
            deepest = max(deepest, maxDepth(child));
        }

        return 1 + deepest;
    }
};