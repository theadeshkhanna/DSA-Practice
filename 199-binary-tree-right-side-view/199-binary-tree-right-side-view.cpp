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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> ans;
        if (root == NULL) return ans;
        
        q.push(root);
        
        while(q.size() > 0) {
            int s = q.size();
            
            
            for (int i = 0; i < s; i++) {
                TreeNode* curr = q.front();
                if (i == s - 1) {
                    ans.push_back(curr->val);
                }
                
                if (curr->left) {
                    q.push(curr->left);
                }
            
                if (curr->right) {
                    q.push(curr->right);
                }
                
                q.pop();
            }
        }
        
        return ans;
    }
};