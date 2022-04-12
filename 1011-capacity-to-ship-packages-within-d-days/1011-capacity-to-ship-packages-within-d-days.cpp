class Solution {
public:
    bool isValid(vector<int> v, int days, int mx) {
        int n = v.size();
        int day = 1;
        int sum = 0;
        
        for (int i = 0; i < n; i++) {
            sum += v[i];
            if (sum > mx) {
                day++;
                sum = v[i];
            } 
            
            if (day > days) return false;
        }
        
        return true;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int maxi = INT_MIN;
        int sum = 0;
        int n = weights.size();
        
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, weights[i]);
            sum += weights[i];
        }
        
        int lo = maxi;
        int hi = sum;
        int ans = -1;
        
        while(lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (isValid(weights, days, mid)) {
                ans = mid;
                hi = mid - 1;
            } else lo = mid + 1;
        }
        
        return ans;
    }
};