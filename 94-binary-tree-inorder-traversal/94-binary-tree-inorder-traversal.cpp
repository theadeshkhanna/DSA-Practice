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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
         if (root == NULL) {
            return v;
        }
        
        return inorder(root, v);
    }
    
    vector<int> inorder(TreeNode* root, vector<int>& t) {
        if (root->left != NULL) {
            inorder(root->left, t);   
        }
        t.push_back(root->val);
        if (root->right != NULL) {
            inorder(root->right, t);
        }
        return t;
    }
};