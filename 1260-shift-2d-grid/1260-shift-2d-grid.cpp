class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> ans(n,vector<int>(m));
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                int nC = (j + k) % m;
                int nR = (i + (j + k)/m) % n;
                
                ans[nR][nC] = grid[i][j];
            }
        }
        
        return ans;
    }
};