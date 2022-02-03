class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int ans = 0;
        for (int i = 0; i < n / 2; i++) {
            int l = i; 
            int r = n - 1 - i;
            
            ans = max(ans, nums[l] + nums[r]);
        }
        
        return ans;
    }
};