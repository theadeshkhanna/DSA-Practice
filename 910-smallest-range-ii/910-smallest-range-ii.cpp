class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 1) return 0;
        sort(nums.begin(), nums.end());
        
        int res = nums[n - 1] - nums[0];
        int left = nums[0] + k;
        int right = nums[n - 1] - k;
        
        for (int i = 0; i < n - 1; i++) {
            int maxi = max(right, nums[i] + k);
            int mini = min(left, nums[i + 1] - k);
            
            res = min(res, maxi - mini);
        }
        
        return res;
    }
};