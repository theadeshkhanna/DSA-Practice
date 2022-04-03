class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans = 0;
        int n = arr2.size();
        int m = arr1.size();
        for (int i = 0; i < m; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if(abs(arr1[i] - arr2[j]) > d) {
                    count++;
                }
            }
            if (count == n) {
                ans++;
            }
        }
        return ans;
    }
};