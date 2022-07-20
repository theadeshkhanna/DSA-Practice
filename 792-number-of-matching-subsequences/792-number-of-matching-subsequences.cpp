class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int n = words.size();
        unordered_map<string, int> m;
        int ans = 0;
        
        for (int i = 0; i < n; i++) {
            m[words[i]]++;
        }
        
        for (auto c: m) {
            if (isSubsequence(s, c.first)) ans += c.second;
        }
        
        return ans;
    }
    
    bool isSubsequence(string a, string b) {
        int i = 0, j = 0;
        int n = a.size();
        int m = b.size();
        
        while(i < n && j < m) {
            if (a[i] == b[j]) {
                i++;
                j++;
            } else {
                i++;
            }
        }
        
        return j == m;
    }
};