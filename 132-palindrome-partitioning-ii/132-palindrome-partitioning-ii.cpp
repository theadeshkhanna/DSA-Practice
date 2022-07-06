class Solution {
public:
    int t[2001][2001];
    
    int minCut(string s) {
        memset(t, -1, sizeof(t));
        return solve(s, 0, s.size() - 1);
    }
    
    bool isPd(string& s, int i, int j) {
        if (i == j) return true;
        if (i > j) return true;
        
        while(i < j) {
            if (s[i] != s[j]) return false;
            i++;
            j--;
        }
        
        return true;
    }
    
    int solve(string& s, int i, int j) {
        int mini = INT_MAX;

        if (i >= j) {
            return 0;
        }
        
        if (isPd(s, i, j)) {
            return 0;
        }
        
        if (t[i][j] != -1) {
            return t[i][j];
        }
        
        for (int k = i; k <= j - 1; k++) {
            if (isPd(s, i, k)) {
 				mini = min(mini, 1 + 0 + solve(s, k + 1, j));
 			}
        }
        
        return t[i][j] = mini;
    }
};