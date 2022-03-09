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
    int res;
    int sumOfLeftLeaves(TreeNode* root) {
        sum(root, -1);
        return res;
    }
    
    int sum(TreeNode* root, int direction) {
        if (root == NULL) {
            return 0;
        }
        
        if (root->left == NULL && root->right == NULL) {
            if (direction == 0) {
                res += root->val;
            }
        }
        
        sum(root->left, 0);
        sum(root->right, 1);
        
        return res;
    }
};