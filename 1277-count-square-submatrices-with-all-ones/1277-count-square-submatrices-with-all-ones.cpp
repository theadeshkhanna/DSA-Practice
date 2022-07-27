class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int cnt = 0;
        
        int arr[n][m];
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i == 0 || j == 0) {
                    arr[i][j] = matrix[i][j];
                }
            }
        }
        
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (matrix[i][j] == 1) {
                    arr[i][j] = 1 + min(arr[i - 1][j], min(arr[i - 1][j - 1], arr[i][j - 1]));
                } else {
                    arr[i][j] = 0;
                }
            }
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cnt += arr[i][j];
            }
        }
        
        return cnt;
    }
};