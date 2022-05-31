class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        unordered_map<string, vector<string>> m;
        vector<vector<string>> ans;
        int n = s.size();
        
        for (int i = 0; i < n; i++) {
            string a = s[i];
            
            sort(a.begin(), a.end());
            m[a].push_back(s[i]);
        }
        
        for (auto c: m) {
            ans.push_back(c.second);
        }
        
        return ans;
    }
};