class Solution {
public:
    int scoreOfParentheses(string s) {
        int n = s.size();
        int cnt = 0;
        int depth = 0;
        char prev = '(';
        
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                depth++;
            } else {
                depth--;
                if (prev == '(') {
                    cnt += pow(2, depth);
                }
            }
            
            prev = s[i];
        }
        
        return cnt;
    }
};