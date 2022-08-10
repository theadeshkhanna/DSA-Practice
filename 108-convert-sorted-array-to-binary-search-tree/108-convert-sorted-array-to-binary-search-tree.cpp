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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return createBST(nums, 0, nums.size() - 1);
    }
    
    TreeNode* createBST(vector<int>& nums, int f, int e) {
        if (f > e) {
            return NULL;
        }
        
        int mid = ( f + e ) / 2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = createBST(nums, f, mid - 1);
        root->right = createBST(nums, mid + 1, e);
        
        return root;
    }
};