class Solution {
public:
    bool judgeSquareSum(int c) {
        if (c < 3) return true;
        
        long long int lo = 0;
        long long int hi = sqrt(c);
        
        while(lo <= hi) {
            long long int loSq = lo * lo;
            long long int hiSq = hi * hi;
            
            if (loSq + hiSq == c) {
                return true;
            } else if (loSq + hiSq < c) {
                lo++;
            } else {
                hi--;
            }
        }
        
        return false;
    }
};