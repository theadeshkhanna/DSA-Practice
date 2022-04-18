class Solution {
public:
    bool canConstruct(string r, string k) {
        int freq[26] = {0};
        
        for (int i = 0; i < k.size(); i++) {
            freq[k[i] - 97]++;
        }
        
        for (int i = 0; i < r.size(); i++) {
            freq[r[i] - 97]--;
        }
        
        for (int i = 0; i < 26; i++) {
            if (freq[i] < 0) return false;
        }
        
        return true;
    }
};