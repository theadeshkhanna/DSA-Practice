class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        int t[n + 1][amount + 1];
        
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= amount; j++) {
                if (j == 0) {
                    t[i][j] = 0;
                }
                
                if (i == 0) {
                    t[i][j] = INT_MAX - 1;
                }
            }
        }
        
        for (int j = 1; j <= amount; j++) {
            if (j % coins[0] == 0) {
                t[1][j] = j / coins[0];
            } else {
                t[1][j] = INT_MAX - 1;
            }
        }
        
        for (int i = 2; i <= n; i++) {
            for (int j = 1; j <= amount; j++) {
                if (coins[i - 1] <= j) {
                    t[i][j] = min(1 + t[i][j - coins[i - 1]], t[i - 1][j]);
                } else {
                    t[i][j] = t[i - 1][j];
                }
            }
        }
        
        return t[n][amount] == INT_MAX - 1 ? -1 : t[n][amount];
    }
};