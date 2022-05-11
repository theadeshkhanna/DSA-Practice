class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;
        int last2 = 1, last = 2, ans;
        
        for (int i = 3; i <= n; i++) {
            ans = last + last2;
            last2 = last;
            last = ans;
        }
        
        return ans;
    }
};