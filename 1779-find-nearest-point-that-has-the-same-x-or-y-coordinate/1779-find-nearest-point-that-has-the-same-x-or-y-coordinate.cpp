class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int n = points.size();
        int mini = INT_MAX;
        int ans = -1;
        
        for (int i = 0; i < n; i++) {
            if (x == points[i][0] || y == points[i][1]) {
                int man = abs(x - points[i][0]) + abs(y - points[i][1]);
                if (mini > man) {
                    mini = man;
                    ans = i;
                }
            }
        }
        
        return ans;
    }
};