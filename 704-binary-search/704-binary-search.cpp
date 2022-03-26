class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int lo = 0;
        int hi = n - 1;
        
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            if (target > nums[mid]) {
                lo = mid + 1;
            }
            
            if (target < nums[mid]) {
                hi = mid - 1;
            }
            
            if (target == nums[mid]) {
                return mid;
            }
        }
        
        return -1;
    }
};