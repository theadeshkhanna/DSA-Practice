class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        if(k < arr[0])
            return k;
        
        int lo = 0;
        int hi = n;
        
        while(lo < hi) {
            int mid = lo + (hi - lo) / 2;
            int miss = arr[mid] - mid - 1;
            
            if (miss < k) {
                lo = mid + 1;
            } else {
                hi = mid;
            }
        }
        
        return lo + k;
    }
};