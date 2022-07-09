// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    int t[201][201];
    int eggDrop(int n, int k) 
    {
       memset(t, -1, sizeof(t));
       return solve(n, k);
    }
    
    int solve(int e, int f) {
        if (f == 0 || f == 1) return f;
        if (e == 1) return f;
        
        if (t[e][f] != -1) return t[e][f];
        
        int mn = INT_MAX;
        for (int k = 1; k <= f; k++) {
            int high, low;
            
            if (t[e - 1][k - 1] != -1) {
                low = t[e - 1][k - 1];
            } else {
                low = solve(e - 1, k - 1);
                t[e - 1][k - 1] = low;
            }
            
            if (t[e][f - k] != -1) {
                high = t[e][f - k];
            } else {
                high = solve(e, f - k);
                t[e][f - k] = high;
            }
            
            int temp = 1 + max(low, high);
            mn = min(mn, temp);
        }
        
        return t[e][f] = mn;
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;
        Solution ob;
        //calling function eggDrop()
        cout<<ob.eggDrop(n, k)<<endl;
    }
    return 0;
}
  // } Driver Code Ends