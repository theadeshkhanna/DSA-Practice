class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        int n = nums.size();
        int cnt = 0;
        int cursum = 0;
        
        for (int i = 0; i < n; i++) {
            cursum += nums[i];
            
            if (cursum == k) {
                cnt++;
            }
            
            if (m.count(cursum - k) > 0) {
                cnt += m[cursum - k];
            }
            
            m[cursum]++;
        }
        
        return cnt;
    }
};