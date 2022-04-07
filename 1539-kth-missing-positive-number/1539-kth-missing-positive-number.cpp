class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        
        int lo = 0;
        int hi = n - 1;
        
        while(lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            int miss = arr[mid] - mid;
            
            if (miss <= k) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        
        return lo + k;
    }
};