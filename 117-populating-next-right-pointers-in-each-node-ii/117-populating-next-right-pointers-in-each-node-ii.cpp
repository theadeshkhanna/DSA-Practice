/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if (root == NULL) return root;
        
        queue<Node*> q;
        q.push(root);
        
        while(q.size() > 0) {
            int s = q.size();
            
            for (int i = 0; i < s; i++) {
                Node* fr = q.front();
                q.pop();
                
                if (i == s - 1) fr->next = NULL;
                else fr->next = q.front();
                
                if (fr->left) q.push(fr->left);
                if (fr->right) q.push(fr->right);
            }
        }
        
        return root;
    }
};