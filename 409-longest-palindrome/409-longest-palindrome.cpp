class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> m;
        int n = s.size();
        int ans = 0;
        
        for (int i = 0; i < n; i++) {
            m[s[i]]++;
        }
        
        for (auto i = m.begin(); i != m.end(); i++) {
            if (i->second % 2 == 0) {
                ans += i->second;
            } else {
                if (ans % 2 == 0) {
                    ans++;
                } 
                
                    ans += (i->second / 2) * 2;
            }
        }
        
        return ans;
    }
};