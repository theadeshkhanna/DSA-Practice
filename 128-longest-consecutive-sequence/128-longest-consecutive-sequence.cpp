class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int finalLength = 0;
        unordered_set<int> s;
        
        for (int i = 0; i < n; i++) {
            s.insert(nums[i]);
        }
        
        for (int i = 0; i < n; i++) {
            if (!s.count(nums[i] - 1)) {
                int elem = nums[i];
                int length = 1;
                
                while(s.count(elem + 1)) {
                    elem += 1;
                    length += 1;
                }
                
                finalLength = max(finalLength, length);
            }
        }
        
        return finalLength;
    }
};