// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // int v = n / k;
        for (int i = 0; i < n; i += k) {
            if (i + k - 1 > n - 1) {
                int p = i;
                int q = n - 1;
                while(p < q) {
                    swap(arr[p++], arr[q--]);
                }
                // reverse(arr + i, arr + n - 1)
            } else {
                int p = i;
                int q = i + k - 1;
                while(p < q) {
                    swap(arr[p++], arr[q--]);
                }
                // reverse(arr + i, arr + i + k - 1)   
            }
        }
    }
};

// { Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
}

  // } Driver Code Ends