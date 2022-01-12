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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        return insert(root, val);
    }
    
    TreeNode* insert(TreeNode* root, int val) {
        if (root == NULL) {
            TreeNode* newNode = new TreeNode(val);
            return newNode;
        }
        
        if (val < root->val) {
            TreeNode* leftTree = insert(root->left, val);
            root->left = leftTree;
        }
        
        if (val > root->val) {
            TreeNode* rightTree = insert(root->right, val);
            root->right = rightTree;
        }
        
        return root;
    }
};