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
    int goodNodes(TreeNode* root) {
        if (!root) return 0;
        return getNodes(root, root->val);
    }
    
    int getNodes(TreeNode* root, int max) {
        if (!root) return 0;
        
        int goodNode = 0;
        
        if (root->val >= max) {
            goodNode++;
            
            max = root->val;
        }
        
        return goodNode + getNodes(root->left, max) + getNodes(root->right, max);
    }
};