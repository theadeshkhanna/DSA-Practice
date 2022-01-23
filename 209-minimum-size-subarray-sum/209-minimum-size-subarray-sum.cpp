class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int end = 0;
        int sum = 0;
        int ans = INT_MAX;
        while(end < n) {
            sum = sum + nums[end];
            if (sum < target) {
                end++;
            } else {
                while(sum >= target) {
                    ans = min(ans, end - start + 1);
                    sum = sum - nums[start];
                    start++;
                }
                end++;
            }
        }
        
        if (ans == INT_MAX) {
            return 0;
        } else {
            return ans;
        }
    }
};