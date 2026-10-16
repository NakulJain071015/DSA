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
long long ans =0;
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL)return 0;
        long long lh = checkHeight(root->left);
        long long rh = checkHeight(root->right);
         ans = max(ans, lh + rh);
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);
        return ans;
    }
    int checkHeight(TreeNode* root){
        if(root == NULL)return 0;
        long long l = checkHeight(root->left);
        long long r = checkHeight(root->right);
        return 1+max(l,r);
    }

};