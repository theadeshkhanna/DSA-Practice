class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int n = prices.size();
        int mini = INT_MAX;
        for (int i = 0; i < n; i++) {
            mini = min(mini, prices[i]);
            profit = max(profit, prices[i] - mini);
        }
        
        return profit;
    }
};