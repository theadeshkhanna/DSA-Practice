// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int countBT(int h) { 
        vector<long long> dp(h + 1);
        
        dp[0] = 1;
        dp[1] = 1;
        
        int mod = (int) (pow(10, 9) + 7);
        
        for (int i = 2; i <= h; i++) {
            long long x = dp[i - 1];
            long long y = dp[i - 2];

            long long temp1 = (long long) (((long long) (x) * x) % mod);
            long long temp2 = (long long) ((2 * (long long) (x) * y) % mod);

            dp[i] = (temp1 + temp2) % mod;
        }
        
        return dp[h];
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int h;
        cin >> h;
        Solution ob;
        cout<<ob.countBT(h)<<endl;  
    }
    return 0;
}
  // } Driver Code Ends