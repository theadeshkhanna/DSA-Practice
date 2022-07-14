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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return buildTreeHelper(preorder, inorder, 0, inorder.size() - 1, 0, preorder.size() - 1);
    }
    
    TreeNode* buildTreeHelper(vector<int>& pre, vector<int>& in, int inS, int inE, int preS, int preE) {
        if (inS > inE) {
            return NULL;
        }
                
        int rootData = pre[preS];
        int rootIndex = -1;
        for (int i = inS; i <= inE; i++) {
            if (in[i] == rootData) {
                rootIndex = i;
                break;
            }
        }
        
        int lInS = inS;
        int lInE = rootIndex - 1;
        int rInS = rootIndex + 1;
        int rInE = inE;
        int lPreS = preS + 1;
        int lPreE = lInE - lInS + lPreS;
        int rPreS = lPreE + 1;
        int rPreE = preE;
        
        TreeNode* root = new TreeNode(rootData);
        root->left = buildTreeHelper(pre, in, lInS, lInE, lPreS, lPreE);
        root->right = buildTreeHelper(pre, in, rInS, rInE, rPreS, rPreE);
        
        return root;
    }
};