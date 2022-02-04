class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int cnt = 0;
        
        for (int i = 0; i < n; i++) {
            if (nums[i] != cnt) {
                break;
            }
            
            cnt++;
        }
        
        return cnt;
    }
};