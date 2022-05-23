class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> v;
        int idx = 0;
        
        for (int i = 1; i <= n; i++) {
            v.push_back(i);
        }
        
        solve(v, idx, k - 1);
        return v[0];
    }
    
    void solve(vector<int>& v, int idx, int k) {
        if (v.size() == 1) {
            return;
        }
        
        idx = (idx + k) % v.size();
        v.erase(v.begin() + idx);
        
        solve(v, idx, k);
    }
};