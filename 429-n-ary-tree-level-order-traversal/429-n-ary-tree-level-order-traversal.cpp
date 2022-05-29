/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if (root == NULL) {
            return {};
        }
        
        vector<vector<int>> v;
        queue<Node* > q;
        q.push(root);
        
        while(q.size() > 0) {
            vector<int> a;
            int s = q.size();
            
            for (int i = 0; i < s; i++) {
                Node* fr = q.front();
                q.pop();
                
                a.push_back(fr->val);
                for (auto c: fr->children) {
                    q.push(c);
                }
            }
            v.push_back(a);
        }
        
        return v;
    }
};