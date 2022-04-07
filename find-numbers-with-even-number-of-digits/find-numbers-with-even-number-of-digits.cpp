class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        
        for (int i = 0; i < n; i++) {
            int cnt = digit(nums[i]);
            if (cnt % 2 == 0) ans++;
        }
        
        return ans;
    }
    
    int digit(int num) {
        int cnt = 0;
        while(num) {
            num /= 10;
            cnt++;
        }
        
        return cnt;
    }
};