class Solution {
public:
    
    bool checkPalindrome(string s) {
        int l = 0;
        int r = s.size() - 1;
        
        while(l < r) {
            if (s[l++] != s[r--]) {
                return false;
            }
        }
        
        return true;
    }
    
    string firstPalindrome(vector<string>& words) {
        int n = words.size();
        
        for (int i = 0; i < n; i++) {
            if (checkPalindrome(words[i])) {
                return words[i];
            }
        }
        
        return "";
    }
};