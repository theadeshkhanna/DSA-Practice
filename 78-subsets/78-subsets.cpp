class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        
        solve(nums, temp, ans);
        return ans;
    }
    
    void solve(vector<int> nums, vector<int> temp, vector<vector<int>>& ans) {
        if (nums.size() == 0) {
            ans.push_back(temp);
            return;
        }
        
        vector<int> temp1 = temp;
        vector<int> temp2 = temp;
        
        temp2.push_back(nums[0]);
        nums.erase(nums.begin());
        
        solve(nums, temp1, ans);
        solve(nums, temp2, ans);
    }
};