class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s;
        int n = pushed.size();
        int j = 0;
        
        for (int i = 0; i < n; i++) {
            s.push(pushed[i]);
            
            while(s.size() && s.top() == popped[j]) {
                s.pop();
                j++;
            }
        }
        
        return s.size() == 0;
    }
};