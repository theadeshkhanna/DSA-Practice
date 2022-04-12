// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    
    bool isValid(int a[], int n, int m, int mx) {
        int students = 1;
        int sum = 0;
        
        for (int i = 0; i < n; i++) {
            sum += a[i];
            
            if (sum > mx) {
                students++;
                sum = a[i];
            }
            
            if (students > m) return false;
        }
        
        return true;
    }
    
    int findPages(int a[], int n, int m) 
    {
        int maxi = INT_MIN;
        int sum = 0;
        
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, a[i]);
            sum += a[i];
        }
        
        int lo = maxi;
        int hi = sum;
        int ans = -1;
        
        while(lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (isValid(a, n, m, mid)) {
                ans = mid;
                hi = mid - 1;
            } else lo = mid + 1;
        }
        
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends