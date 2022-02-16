class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_cnt = 0, cnt = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                cnt++;
                max_cnt = max(cnt, max_cnt);
            } else {
                cnt = 0;
            }
        }
        
        return max_cnt;
    }
};