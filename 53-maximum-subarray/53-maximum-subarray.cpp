class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int csum = 0;
        int msum = INT_MIN;
        
        for (int i = 0; i < n; i++) {
            csum = csum + nums[i];
            
            if (csum > msum) {
                msum = csum;
            }
            
            if (csum < 0) {
                csum = 0;
            }
        }
        
        return msum;
    }
};