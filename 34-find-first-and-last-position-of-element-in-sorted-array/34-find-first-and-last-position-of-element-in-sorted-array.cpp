class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        int lo1 = 0;
        int hi1 = n - 1;
        int lo2 = 0;
        int hi2 = n - 1;
        int f = -1;
        int l = -1;
        
        while(lo1 <= hi1) {
            int mid = (lo1 + hi1) / 2;
            if (nums[mid] == target) {
                f = mid;
                hi1 = mid - 1;
            } else if (nums[mid] < target) {
                lo1 = mid + 1;
            } else {
                hi1 = mid - 1;
            }
        }
        
         while(lo2 <= hi2) {
            int mid = (lo2 + hi2) / 2;
            if (nums[mid] == target) {
                l = mid;
                lo2 = mid + 1;
            } else if (nums[mid] < target) {
                lo2 = mid + 1;
            } else {
                hi2 = mid - 1;
            }
        }
        
        ans.push_back(f);
        ans.push_back(l);
        
        return ans;
    }
};