class Solution {
public:
    int subsetSum(vector<int>& nums, int target) {
        int n = nums.size();
        int t[n + 1][target + 1];
        
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= target; j++) {
                if (i == 0) {
                    t[i][j] = 0;
                }
                
                if (j == 0) {
                    t[i][j] = 1;
                }
            }
        }
        
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= target; j++) {
                if (nums[i - 1] <= j) {
                    t[i][j] = t[i - 1][j - nums[i - 1]] + t[i - 1][j];
                } else {
                    t[i][j] = t[i - 1][j];
                }
            }
        }
        
        return t[n][target];
    }
    
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if(sum < abs(target) || (target + sum) % 2 != 0) return 0;
        
        int value = (sum + target) / 2;
        return subsetSum(nums, value);
    }
};