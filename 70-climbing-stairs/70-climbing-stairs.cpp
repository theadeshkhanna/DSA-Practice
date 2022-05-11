class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;
        int prev2 = 1, prev = 2, ans;
        
        for (int i = 3; i <= n; i++) {
            ans = prev + prev2;
            prev2 = prev;
            prev = ans;
        }
        
        return ans;
    }
};