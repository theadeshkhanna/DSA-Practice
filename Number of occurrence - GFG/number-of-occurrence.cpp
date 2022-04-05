// { Driver Code Starts


#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    int l1 = 0;
	    int l2 = 0;
	    int h1 = n - 1;
	    int h2 = n - 1;
	    int f = -1;
	    int l = -1;
	    
	    while(l1 <= h1) {
	        int mid = l1 + (h1 - l1) / 2;
	        if (arr[mid] == x) {
	            f = mid;
	            h1 = mid - 1;
	        } else if (arr[mid] < x) {
	            l1 = mid + 1;
	        } else {
	            h1 = mid - 1;
	        }
	    }
	    
	    while(l2 <= h2) {
	        int mid = l2 + (h2 - l2) / 2;
	        if (arr[mid] == x) {
	            l = mid;
	            l2 = mid + 1;
	        } else if (arr[mid] < x) {
	            l2 = mid + 1;
	        } else {
	            h2 = mid - 1;
	        }
	    }
	    
	    if (f == -1) {
	        return 0;
	    } else {
	        return l - f + 1;
	    }
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends