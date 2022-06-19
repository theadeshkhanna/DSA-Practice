// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
    vector<int> subsetSum(int arr[], int n, int range) {
        bool t[n + 1][range + 1];
        vector<int> ans;
        
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= range; j++) {
                if (i == 0) {
                    t[i][j] = false;
                }
                
                if (j == 0) {
                    t[i][j] = true;
                }
            }
        }
        
        for (int i = 1; i < n + 1; i++) {
            for (int j = 1; j < range + 1; j++) {
                    if (arr[i - 1] <= j) {
                        t[i][j] = (t[i - 1][j - arr[i - 1]]) || (t[i - 1][j]);
                    } else {
                        t[i][j] = t[i - 1][j];
                    }
            }
        }
        
        for (int i = 0; i <= range / 2; i++) {
            if (t[n][i] != false) ans.push_back(i);
        }
        
        return ans;
    }
  
	int minDifference(int arr[], int n)  { 
	    int range = 0;
	    
	    for (int i = 0; i < n; i++) {
	        range += arr[i];
	    }
	    
	    vector<int> a = subsetSum(arr, n, range);
	    
	    int ans = INT_MAX;
	    
	    for (int i = 0; i < a.size(); i++) {
	        ans = min(ans, (range - 2 * a[i]));
	    }
	    
	    return ans;
	} 
};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends