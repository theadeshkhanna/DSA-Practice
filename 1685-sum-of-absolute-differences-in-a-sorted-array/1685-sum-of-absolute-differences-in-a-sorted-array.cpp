class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int sum = 0;
        int lsum = 0;
        int lnum = 0;
        
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }
        
        for (int i = 0; i < n; i++) {
            int rsum = sum - lsum - nums[i];
            int rnum = n - lnum - 1;
            ans[i] = ((lnum * nums[i]) - lsum) + (rsum - (rnum * nums[i]));
            lnum++;
            lsum += nums[i];
        }
        
        return ans;
    }
};