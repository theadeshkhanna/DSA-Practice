class Solution {
public:
    string shortestCommonSupersequence(string x, string y) {
        int m = x.size();
        int n = y.size();
        
        int t[m + 1][n + 1];
        string ans = "";
        
        for (int i = 0; i <= m; i++) {
            for (int j = 0; j <= n; j++) {
                if (i == 0 || j == 0) {
                    t[i][j] = 0;
                }
            }
        }
        
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (x[i - 1] == y[j - 1]) {
                    t[i][j] = 1 + t[i - 1][j - 1];
                } else {
                    t[i][j] = max(t[i][j - 1], t[i - 1][j]);
                }
            }
        }
        
        int i = m, j = n;
        while(i > 0 && j > 0) {
            if (x[i - 1] == y[j - 1]) {
                ans.push_back(x[i - 1]);
                i--;
                j--;
            } else {
                if (t[i - 1][j] > t[i][j - 1]) {
                    ans.push_back(x[i - 1]);
                    i--;
                } else {
                    ans.push_back(y[j - 1]);
                    j--;
                }
            }
        }
        
        while(i > 0) {
            ans.push_back(x[i - 1]);
            i--;
        }
        
        while(j > 0) {
            ans.push_back(y[j - 1]);
            j--;
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};