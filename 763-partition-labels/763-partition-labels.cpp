class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char, int> m;
        vector<int> v;
        
        int n = s.size();
        int prev = -1;
        int maxi = 0;
        
        for (int i = 0; i < n; i++) {
            m[s[i]] = i;
        }
        
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, m[s[i]]);
            if (maxi == i) {
                v.push_back(maxi - prev);
                prev = maxi;
            }
        }
        
        return v;
    }
};