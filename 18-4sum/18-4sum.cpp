class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n = nums.size();
        
        if (n == 0) {
            return ans;
        }
        
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                
                int front = j + 1;
                int back = n - 1;
                int target2 = target - nums[i] - nums[j];
                
                while(front < back) {
                    int sum2 = nums[front] + nums[back];
                    
                    if (sum2 < target2) {
                        front++;
                    } else if (sum2 > target2) {
                        back--;
                    } else {
                        vector<int> v(4, 0);
                        v[0] = nums[i];
                        v[1] = nums[j];
                        v[2] = nums[front];
                        v[3] = nums[back];
                        
                        ans.push_back(v);
                        
                        while(front < back && nums[front] == v[2]) front++;
                        while(front < back && nums[back] == v[3]) back--;
                    }
                }
                
                while(j + 1 < n && nums[j + 1] == nums[j]) j++;
            }
            
            while(i + 1 < n && nums[i + 1] == nums[i]) i++;
        }
        
        return ans;
    }
};