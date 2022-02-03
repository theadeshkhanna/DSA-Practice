class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;
        vector<int> positive;
        vector<int> negative;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                positive.push_back(nums[i]);
            } else {
                negative.push_back(nums[i]);
            }
        }
        
        for (int i = 0, j = 0; i < nums.size() / 2, j < nums.size() / 2; i++, j++) {
            ans.push_back(positive[i]);
            ans.push_back(negative[j]);
        }
        
        return ans;
    }
};