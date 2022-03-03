class Solution {
public:
    bool isHappy(int n) {
        int slow = n, fast = n;
        do {
            slow = squaresum(slow);
            fast = squaresum(fast);
            fast = squaresum(fast);
        } while(slow != fast);
        
        return slow == 1;
    }
    
    int squaresum(int n) {
        int ans = 0;
        while(n) {
            int elm = n % 10;
            ans += (elm * elm);
            n /= 10;
        }
        return ans;
    }
};