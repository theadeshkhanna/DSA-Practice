class Solution {
public:
    int minDeletions(string s) {
        int n = s.size();
        int ans = 0;
        
        unordered_map<char, int> m;
        unordered_set<int> t;
        
        for (int i = 0; i < n; i++) {
            m[s[i]]++;
        }
        
        for (auto[i, j]: m) {
            while (t.find(j) != t.end()) {
                j--;
                ans++;
            }
            
            if (j > 0) {
                t.insert(j);
            }
        }
        
        return ans;
    }
};