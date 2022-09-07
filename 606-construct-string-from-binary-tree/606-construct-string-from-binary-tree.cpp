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
    string tree2str(TreeNode* root) {
        string ans;
        return preorder(root, ans);
    }
    
    string preorder(TreeNode* root, string& pre) {
        if (root) {
            pre += to_string(root->val);
        }
        
        if (root->left) {
            pre.push_back('(');
            preorder(root->left, pre);
            pre.push_back(')');
        }
        
        if (root->right) {
            if (root->left == NULL) {
                pre.push_back('(');
                pre.push_back(')');
            }
            pre.push_back('(');
            preorder(root->right, pre);
            pre.push_back(')');
        }
        
        return pre;
    }
};