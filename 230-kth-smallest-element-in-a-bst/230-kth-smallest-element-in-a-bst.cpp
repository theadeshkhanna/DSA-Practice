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
    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans;
        vector<int> in = inorder(root, ans);
        
        return in[k - 1];
    }
    
    vector<int> inorder(TreeNode* root, vector<int>& ans) {
        if (root->left) {
            inorder(root->left, ans);
        }
        
        ans.push_back(root->val);
        
        if (root->right) {
            inorder(root->right, ans);
        }
        
        return ans;
    }
};