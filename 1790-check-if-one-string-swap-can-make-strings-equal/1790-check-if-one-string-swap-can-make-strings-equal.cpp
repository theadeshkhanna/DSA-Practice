class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int cnt = 0;
        int n = s1.size();
        
        if (n == 1) {
            if (s1 == s2) {
                return true;   
            } else {
                return false;
            }
        }
        
        for (int i = 0; i < n; i++) {
            if (s1[i] != s2[i]) {
                cnt++;
            }
        }
        
        
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        
        return cnt <= 2 && n > 2 && s1 == s2;
    }
};