// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


int findElement(int arr[], int n) {
    int maxarr[n], minarr[n];
    int maxi = arr[0];
    int mini = arr[n - 1];
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxi) {
            maxi = arr[i];
        }
        
        maxarr[i] = maxi;
    }
    
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] < mini) {
            mini = arr[i];
        }
        
        minarr[i] = mini;
    }
    
    for (int i = 0; i < n; i++) {
        if (i != 0 && i != n - 1 && maxarr[i] == minarr[i]) {
            return arr[i];
        }
    }
    
    return -1;
}