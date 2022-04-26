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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        if (root == NULL) {
            return v;
        }
        
        return preorder(root, v);
    }
    
    vector<int> preorder(TreeNode* root, vector<int>& t) {
        t.push_back(root->val);
        if (root->left != NULL) {
            preorder(root->left, t);
        }
        
        if (root->right != NULL) {
            preorder(root->right, t);
        }
        return t;
    }
};