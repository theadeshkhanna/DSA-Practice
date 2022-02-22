// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	
	int static compare(string s1, string s2) {
	    string one = s1+s2;
	    string two = s2+s1;
	    
	    for (int i = 0; i < one.size(); i++) {
	        if (one[i] > two[i]) {
	            return 1;
	        } else if (one[i] < two[i]) {
	            return 0;
	        }
	    }
	    
	    return 0;
	}
	
	string printLargest(vector<string> &arr) {
	    sort(arr.begin(), arr.end(), compare);
	    
	    string ans = "";
	    
	    for (int i = 0; i < arr.size(); i++) {
	        ans.append(arr[i]);
	    }
	    
	    return ans;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<string> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.printLargest(arr);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends