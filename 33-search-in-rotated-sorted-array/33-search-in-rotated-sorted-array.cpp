class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int index = getSmallestElement(nums);
                
        int a = binarySearch(nums, 0, index - 1, target);
        int b = binarySearch(nums, index, n - 1, target);
                        
        if (a == -1 && b == -1) return -1;
        else if (a == -1 && b != -1) return b;
        else return a;
    }
    
    int getSmallestElement(vector<int>& nums) {
        int n = nums.size();
        int lo = 0;
        int hi = n - 1;
        int ans = lo;
        
        while(lo <= hi) {
            
            if (nums[lo] < nums[hi]) return lo;
            
            int mid = (lo + hi) / 2;
            int prev = (mid + n - 1) % n;
            int next = (mid + 1) % n;
            
            if (nums[mid] <= nums[prev] && nums[mid] <= nums[next]) {
                return mid;
            } 
            
             if (nums[lo] <= nums[mid]) {
                lo = mid + 1;
            } else if (nums[mid] <= nums[hi]) {
                hi = mid - 1;
            }
        }
        
        return ans;
    }
    
    int binarySearch(vector<int>& nums, int lo, int hi, int x) {
        while(lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            
            if (nums[mid] == x) return mid;
            else if (nums[mid] < x) lo = mid + 1;
            else hi = mid - 1;
        }
        
        return -1;
    }
};