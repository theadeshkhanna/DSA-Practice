// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    int safePos(int n, int k) {
        vector<int> v;
        k = k - 1;
        int idx = 0;

        for (int i = 1; i <= n; i++) {
            v.push_back(i);
        }
        
        solve(k, idx, v);
        
        return v[0];
    }
    
    void solve(int k, int idx, vector<int>& v) {
        if (v.size() == 1) {
            return;
        }
        
        idx = (idx + k) % v.size();
        v.erase(v.begin() + idx);
        
        solve(k, idx, v);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        
        cin>>n>>k;

        Solution ob;
        cout << ob.safePos(n,k) << endl;
    }
    return 0;
}  // } Driver Code Ends