// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int n)
    {
        if (n == 0) {
            return "-1";
        }
        
        string prefix = arr[0];
        
        for (int i = 0; i < n; i++) {
            while(arr[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.size() - 1);
            }
        }
        
        return prefix == "" ? "-1" : prefix;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends