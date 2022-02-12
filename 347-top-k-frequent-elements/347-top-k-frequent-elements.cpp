class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        vector<int> v;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            m[nums[i]]++;
        }
        
        priority_queue<pair<int, int>> pq;
        for (auto pair: m) {
            pq.emplace(pair.second, pair.first);
        }
        
        while(k--) {
            v.push_back(pq.top().second);
            pq.pop();
        }
        
        return v;
    }
};