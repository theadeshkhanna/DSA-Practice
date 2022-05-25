class Solution {
public:
    int numSquares(int n) {
        int* ans = new int[n + 1];
        for (int i = 0; i <= n; i++) {
            ans[i] = -1;
        }
        
        return helper(n, ans);
    }
    
    int helper(int n, int* ans) {
        if (sqrt(n) == floor(sqrt(n))) {
            ans[n] = 1;
            return ans[n];
        }

        if (ans[n] != -1) {
            return ans[n];
        }

        int val = n;
        for (int i = 1; i * i <= n; i++) {
            ans[n] = val = min(val, 1 + helper(n - i * i, ans));
        }
    

        return ans[n];
    }
};