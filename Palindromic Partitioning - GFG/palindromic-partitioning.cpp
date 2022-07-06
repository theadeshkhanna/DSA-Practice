// { Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int t[501][501];

    int palindromicPartition(string s) {
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
            int left;
            int right;
            
            if (t[i][k] != -1) {
                left = t[i][k];
            } else {
                left = solve(s, i, k);
                t[i][k] = left;
            }
            
            if (t[k + 1][j] != -1) {
                right = t[k + 1][j];
            } else {
                right = solve(s, k + 1, j);
                t[k + 1][j] = right;
            }
            
            int temp = 1 + left + right;
            mini = min(mini, temp);
        }
        
        return t[i][j] = mini;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}  // } Driver Code Ends