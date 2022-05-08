class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        unordered_map<int, int>::iterator it;
        vector<int> v;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            m[nums[i]]++;
        }
        
        for (it = m.begin(); it != m.end(); it++) {
            pq.push({it->second, it->first});
            if (pq.size() > k) pq.pop();
        }
        
        while(pq.size() > 0) {
            v.push_back(pq.top().second);
            pq.pop();
        }
        
        return v;
    }
};