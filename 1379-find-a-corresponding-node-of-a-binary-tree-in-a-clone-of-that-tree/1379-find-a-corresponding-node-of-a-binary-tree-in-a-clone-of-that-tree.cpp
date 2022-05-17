/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        queue<TreeNode*> q;
        q.push(cloned);
        
        while(q.size() > 0) {
            int s = q.size();
            
            for (int i = 0; i < s; i++) {
                TreeNode* fr = q.front();
                q.pop();
            
                if (fr->val == target->val) {
                    return fr;
                }
            
                if (fr->left) {
                    q.push(fr->left);
                }
            
                if (fr->right) {
                    q.push(fr->right);
                }   
            }
        }
        
        return 0;
    }
};