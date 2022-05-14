class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int, int>> v[n+1];
        vector<int> dist(n+1, INT_MAX);
        queue<int> q;
        int res = 0;
        
        for (int i = 0; i < times.size(); i++) {
            v[times[i][0]].push_back({times[i][1], times[i][2]});
        }
        
        q.push(k);
        dist[k] = 0;
        
        while(!q.empty()) {
            int fr = q.front();
            q.pop();
            
            for (pair<int, int> it: v[fr]) {
                if (dist[it.first] > dist[fr] + it.second) {
                    dist[it.first] = dist[fr] + it.second;
                    q.push(it.first);
                }
            }
        }
        
        for (int i = 1; i <= n; i++) {
            if (dist[i] == INT_MAX) return -1;
            else {
                res = max(res, dist[i]);
            }
        }
        
        return res;
    }
};