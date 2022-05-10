class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
        
        vector<vector<int>> ans;
        priority_queue<pair<int, pair<int, int>>> pq;
        
        for (int i = 0; i < n; i++) {
            int key = points[i][0] * points[i][0] + points[i][1] * points[i][1];
            pq.push({key, {points[i][0], points[i][1]}});
            if (pq.size() > k) pq.pop();
        }
        
        while(pq.size() > 0) {
            vector<int> v;
            auto c = pq.top().second;
            v.push_back(c.first);
            v.push_back(c.second);
            ans.push_back(v);
            pq.pop();
        }
        
        return ans;
    }
};