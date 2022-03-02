class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        for (int i = n - 1; i >= 2; i--) {
            int s1 = nums[i];
            int s2 = nums[i - 1];
            int s3 = nums[i - 2];
            
            bool c1 = s1 + s2 > s3;
            bool c2 = s2 + s3 > s1;
            bool c3 = s3 + s1 > s2;
            
            if (c1 && c2 && c3) {
                return s1 + s2 + s3;
            }
        }
        
        return 0;
    }
};