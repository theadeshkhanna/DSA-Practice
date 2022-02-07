class Solution {
public:
    char findTheDifference(string s, string t) {
        int n = s.size();
        int m = t.size();
        
        s.append(t);
        
        char ans = 0;
        
        for (int i = 0; i < n + m; i++) {
            ans = ans ^ s[i];
        }
        
        return ans;
    }
};