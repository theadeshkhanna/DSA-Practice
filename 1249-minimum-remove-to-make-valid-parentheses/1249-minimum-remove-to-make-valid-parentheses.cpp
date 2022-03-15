class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n = s.size();
        string res;
        int open = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') open++;
            else if(s[i] == ')') {
                if (open == 0) continue;
                open--;
            }
            
            res += s[i];
        }
        
        string ans;
        for (int i = res.size() - 1; i >= 0; i--) {
            if (res[i] == '(' && open-- > 0) continue;
            ans += res[i];
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};