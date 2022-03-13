class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        for (int i = n / 2; i >= 1; i--) {
            if (n % i == 0) {
                int nums = n / i;
                string sub = s.substr(0, i);
                string f = "";
                for (int j = 0; j < nums; j++) {
                    f += sub;
                }
                
                if (f == s) return true;
            }
        }
        return false;
    }
};