class Solution {
public:
    int threeSumMulti(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, long> c;
        int mod = 1e9 + 7;
        
        for (int i = 0; i < n; i++) {
            c[nums[i]]++;
        }
        
        long res = 0;
        
        for (auto it: c) {
            for (auto it1: c) {
                int i = it.first;
                int j = it1.first;
                int k = target - i - j;
                
                if (!c.count(k)) continue;
                
                if (i == j && j == k) {
                    res += c[i] * (c[i] - 1) * (c[i] - 2) / 6;
                } else if (i == j && j != k) {
                    res += c[i] * (c[i] - 1) / 2 * c[k];
                } else if (i < j && j < k) {
                    res += c[i] * c[j] * c[k];
                }
            }
        }
        
        return res % mod;
    }
};