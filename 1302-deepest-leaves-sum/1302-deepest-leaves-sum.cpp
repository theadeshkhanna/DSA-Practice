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
    int deepestLeavesSum(TreeNode* root) {
        int h = height(root);
        int sum = 0;
        
        queue<TreeNode*> q;
        q.push(root);
        int level = 1;
        
        while(q.size() > 0) {
            int s = q.size();
            
            for (int i = 0; i < s; i++) {
                TreeNode* fr = q.front();
                q.pop();
                
                if (level == h) sum += fr->val;
                
                if (fr->left) q.push(fr->left);
                if (fr->right) q.push(fr->right);
            }
            
            level++;
        }
        
        return sum;
    }
    
    int height(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        
        return 1 + max(height(root->left), height(root->right));
    }
};