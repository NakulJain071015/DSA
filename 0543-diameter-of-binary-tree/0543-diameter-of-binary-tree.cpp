/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int ans = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == NULL)
            return 0;

        int lh = checkHeight(root->left);

        int rh = checkHeight(root->right);
        ans = max(ans, lh + rh);
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);
        return ans;
    }
    int checkHeight(TreeNode* root) {
        if (root == NULL)
            return 0;

        int l = checkHeight(root->left);

        int r = checkHeight(root->right);
        return 1 + max(l, r);
    }
};