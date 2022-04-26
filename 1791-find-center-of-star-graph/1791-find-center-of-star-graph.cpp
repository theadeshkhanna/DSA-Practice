class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int, int> s;
        int n = edges.size();
        
        
        for (int i = 0; i < n; i++) {
            s[edges[i][0]]++;
            s[edges[i][1]]++;
        }
        
        for (auto c: s) {
            if (c.second == n) return c.first;
        }
        
        return 0;
    }
};