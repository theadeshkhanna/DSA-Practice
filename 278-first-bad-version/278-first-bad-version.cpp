// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int long long low = 1;
        int long long high = n;
        
        while(low < high) {
            int mid = (low + high)  / 2;
            if (isBadVersion(mid)) {
                high = mid;
            } else {
                low = mid + 1;   
            }
        }
        return low;
    }
};