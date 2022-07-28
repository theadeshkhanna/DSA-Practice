class Solution {
public:
    int lengthOfLIS(vector<int>& x) {
        int n = x.size();
        vector<int> t(n, 1);
        
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i;  j++) {
                if (x[i] > x[j] && t[i] <= t[j]) {
                    t[i] = 1 + t[j];
                }
            }
        }
        
        return *max_element(t.begin(), t.end());
    }
};