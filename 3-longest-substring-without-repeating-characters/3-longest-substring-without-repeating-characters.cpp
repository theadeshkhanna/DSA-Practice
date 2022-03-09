class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> freq(256, -1);
        int n = s.size();
        int len = INT_MIN;
        int start = -1;
        
        if (n == 0) {
            return 0;
        }
    
        for (int i = 0; i < n; i++) {
            if (freq[s[i]] > start) {
                start = freq[s[i]];
            }
        
            freq[s[i]] = i;
            len = max(len, i - start);
        }
    
        return len;
    }
};