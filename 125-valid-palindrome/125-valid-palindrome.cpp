class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        
        int n = s.size();
        
        for (int i = 0; i < n; i++) {
            if (s[i] >= 97 && s[i] <= 122) {
                ans += s[i];
            } else if (s[i] >= 65 && s[i] <= 90) {
                ans += s[i] + 32;
            } else if (s[i] >= 48 && s[i] <= 57) {
                ans += s[i];
            }
        }
        
        int i = 0;
        int j = ans.size() - 1;
        
        while(i < j) {
            if (ans[i] == ans[j]) {
                i++;
                j--;
            } else {
                return false;
            }
        }
        
        return true;
    }
};