class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n = s.size();
        unordered_set<string> st;
        
        if (k > n) {
            return false;
        }
        
        for (int i = 0; i <= n - k; i++) {
            string sub = s.substr(i, k);
            st.insert(sub);
        }
        
        return st.size() == pow(2, k);
    }
};