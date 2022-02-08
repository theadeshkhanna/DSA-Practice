class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        vector<int> ans;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            int numberToFind = target - nums[i];
            
            if (hash.count(numberToFind) > 0) {
                ans.push_back(hash[numberToFind]);
                ans.push_back(i);
                return ans;
            }
            
            hash[nums[i]] = i;
        }
        
        
        return ans;
    }
};