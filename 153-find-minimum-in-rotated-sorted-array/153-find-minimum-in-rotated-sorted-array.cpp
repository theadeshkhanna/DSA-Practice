class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int lo = 0;
        int hi = n - 1;
        int ans = nums[lo];
        
        while(lo <= hi) {
            
            if (nums[lo] < nums[hi]) return nums[lo];
            
            int mid = (lo + hi) / 2;
            int prev = (mid + n - 1) % n;
            int next = (mid + 1) % n;
            
            if (nums[mid] <= nums[prev] && nums[mid] <= nums[next]) {
                return nums[mid];
            } 
            
             if (nums[lo] <= nums[mid]) {
                lo = mid + 1;
            } else if (nums[mid] <= nums[hi]) {
                hi = mid - 1;
            }
        }
        
        return ans;
    }
};