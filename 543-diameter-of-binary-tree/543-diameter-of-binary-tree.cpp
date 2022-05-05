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
        int diameter = 0;
        height(root, diameter);
        return diameter;
    }
    
    int height(TreeNode* root, int& diameter) {
        if (root == NULL) {
            return 0;
        }
        
        int lh = height(root->left, diameter);
        int lr = height(root->right, diameter);
        
        diameter = max(diameter, lh + lr);
        
        return 1 + max(lh, lr);
    }
};