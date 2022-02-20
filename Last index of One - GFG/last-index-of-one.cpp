// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    int lastIndex(string s) 
    {
        int n = s.size();
        int maxi = INT_MIN;
        
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                maxi = max(maxi, i);
            }
        }
        
        return maxi == INT_MIN ? -1 : maxi;
    }

};

// { Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.lastIndex(s) << endl;
    }
    return 0;
}  // } Driver Code Ends