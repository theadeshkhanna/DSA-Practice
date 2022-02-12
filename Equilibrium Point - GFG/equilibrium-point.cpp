// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        
        if (n == 1) {
            return 1;
        }
    
        long long b[n];
        int ans = 0;
        
        b[0] = a[0];
        
        for (int i = 1; i < n; i++) {
            b[i] = b[i-1] + a[i];
        }
        
        int maxSum = b[n-1];
        
        for (int i = 0; i < n; i++) {
            if (b[i] - a[i] == maxSum - b[i]) {
                ans = i;
                break;
            }
        }
        
        return ans == 0 ? -1 : ans + 1;
    }

};

// { Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends