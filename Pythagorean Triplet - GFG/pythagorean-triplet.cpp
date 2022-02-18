// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    int brr[n];
	    unordered_map<int, int> m;
	    
	    for (int i = 0; i < n; i++) {
	        brr[i] = arr[i] * arr[i];
	        m[brr[i]]++;
	    }
	    
	    for (int i = 0; i < n; i++) {
	        for (int j = i + 1; j < n; j++) {
	            int elem = brr[i] + brr[j];
	            if (m.count(elem) > 0) {
	                return true;
	            }
	        }
	    }
	    
	    return false;
	    
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.checkTriplet(arr, n);
        if (ans) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
  // } Driver Code Ends