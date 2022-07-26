class Solution {
public:
    vector<int> getRow(int n) {
        vector<int> val;
        if (n == 0) {
            val.push_back(1);
            return val;
        }
        
        if (n == 1) {
            val.push_back(1);
            val.push_back(1);
            return val;
        }
        
        int arr[n + 1][n + 1];
        memset(arr, 0, sizeof(arr));
        
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= n; j++) {
                if (j == 0) {
                    arr[i][j] = 1;
                }
            }
        }
        
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= n; j++) {
                if (i == j) {
                    arr[i][j] = 1;
                }
            }
        }
        
        for (int i = 2; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
        
        vector<int> ans(arr[n], arr[n] + n + 1);
        return ans;
    }
};