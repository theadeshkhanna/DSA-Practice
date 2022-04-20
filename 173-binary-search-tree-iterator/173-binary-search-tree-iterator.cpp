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
class BSTIterator {
private: 
    vector<int> v;
    int idx;
public:
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
    
    BSTIterator(TreeNode* root) {
        vector<int> in;
        v = inorder(root, in);
        idx = 0;
    }
    
    int next() {
        return v[idx++];
    }
    
    bool hasNext() {
        if (idx < v.size()) return true;
        else return false;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */