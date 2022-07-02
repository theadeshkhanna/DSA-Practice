// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
		

	public:
	int minOperations(string x, string y) 
	{ 
	    int n = x.size();
	    int m = y.size();
	    
	    int t[n + 1][m + 1];
	    
	    for (int i = 0; i <= n; i++) {
	        for (int j = 0; j <= m; j++) {
	            if (i == 0 || j == 0) {
	                t[i][j] = 0;
	            }
	        }
	    }
	    
	    for (int i = 1; i <= n; i++) {
	        for (int j = 1; j <= m; j++) {
	            if (x[i - 1] == y[j - 1]) {
	                t[i][j] = 1 + t[i - 1][j - 1];
	            } else {
	                t[i][j] = max(t[i][j - 1], t[i - 1][j]);
	            }
	        }
	    }
	    
	    int insertion = n - t[n][m];
	    int deletion = m - t[n][m];
	    
	    return insertion + deletion;
	} 
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends