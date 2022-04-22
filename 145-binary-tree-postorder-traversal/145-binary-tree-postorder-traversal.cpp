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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> v;
        if (root == NULL) {
            return v;
        }
        
        return postorder(root, v);
    }
    
    vector<int> postorder(TreeNode* root, vector<int>& t) {
        if (root->left != NULL) {
            postorder(root->left, t);
        }
        
        if (root->right != NULL) {
            postorder(root->right, t);
        }
        
        t.push_back(root->val);
        return t;
    }
};