class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        int ans = 0;
        
        vector<int>l2r(n, 1);
        vector<int>r2l(n, 1);
        
        for (int i = 0; i < n - 1; i++) {
            if (ratings[i] < ratings[i + 1]) {
                l2r[i + 1] = l2r[i] + 1;
            }
        }
        
        for (int i = n - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1]) {
                r2l[i] = r2l[i + 1] + 1;
            }
        }
        
        for (int i = 0; i < n; i++) {
            ans += max(l2r[i], r2l[i]);
        }
        
        return ans;
    }
};