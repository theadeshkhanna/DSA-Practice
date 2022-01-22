class Solution {
public:
    int minStartValue(vector<int>& nums) {
        vector<int> psum;
        psum.push_back(nums[0]);
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            psum.push_back(psum[i-1] + nums[i]);
        }
        
        sort(psum.begin(), psum.end());
        
        if (psum[0] < 0) {
            return abs(psum[0]) + 1;
        } else {
            return 1;
        }
        
        return 0;
    }
};