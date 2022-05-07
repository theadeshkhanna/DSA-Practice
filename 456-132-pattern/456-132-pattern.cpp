class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> mini(n);
        stack<int> s;
        
        mini[0] = nums[0];
        
        for (int i = 1; i < n; i++) {
            mini[i] = min(mini[i - 1], nums[i]);
        }
        
        for (int j = n - 1; j > 0; j--) {
            while (!s.empty() && s.top() < nums[j]) {
               if (s.top() > mini[j - 1]) return true;
               s.pop();
            }
            s.push(nums[j]);
        }
        
        return false;
    }
};