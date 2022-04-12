class Solution {
public:
    int calculateSoldierCount(vector<int> v) {
        int lo = 0;
        int hi = v.size() - 1;
        
        while(lo <= hi) {
            int mid = (lo + hi) / 2;
            
            if (v[mid] == 0) hi = mid - 1;
            else lo = mid + 1;
        }
        
        return lo;
    }
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int, int>, vector<pair<int, int>>> pq;
        vector<int> ans;
        
        for (int i = 0; i < mat.size(); i++) {
            pq.push({calculateSoldierCount(mat[i]), i});
            if (pq.size() > k) pq.pop();
        }
        
        while(!pq.empty()) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};