class Solution {
public:
    int mySqrt(int num) {
        if (num == 1) return 1;
        long long lo = 1;
        long long hi = num / 2;
        long long ans = 0;
        
        while(lo <= hi) {
            long long mid = (lo + hi) / 2;
            long long sq = mid * mid;
            
            if (sq == num) return mid;
            else if (sq < num) {
                lo = mid + 1;
                ans = mid;
            } else {
                hi = mid - 1;
            }
        }
        
        return ans;
    }
};