class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        
        if (n == 1) return 0;
        if (n == 2) return nums[0] > nums[1] ? 0 : 1;
        
        int lo = 0;
        int hi = n - 1;
        
        while(lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            
            if (mid > 0 && mid < n - 1) {
                if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) {
                    return mid;
                } else if (nums[mid] > nums[mid - 1]) {
                    lo = mid + 1;
                } else {
                    hi = mid - 1;
                }
            } else if (mid == 0) {
                if (nums[0] > nums[1]) {
                    return 0;
                } else {
                    return 1;
                }
            } else if (mid == n - 1) {
                if (nums[n - 1] > nums[n - 2]) {
                    return n - 1;
                } else {
                    return n - 2;
                }
            }
        }
        
        return -1;
    }
};