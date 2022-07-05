// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        unordered_map<ll, ll> ma;
        unordered_map<ll, ll> mb;
        
        for (int i = 0; i < N; i++) {
            ma[A[i]]++;
        }
        
        for (int j = 0; j < N; j++) {
            mb[B[j]]++;
        }
        
        for (int j = 0; j < N; j++) {
            if (ma.count(B[j]) < 0) {
                return false;
            } else if (ma[B[j]] != mb[B[j]]) {
                return false;
            }
        }
        
        for (int i = 0; i < N; i++) {
            if (mb.count(A[i]) < 0) {
                return false;
            } else if (ma[A[i]] != mb[A[i]]) {
                return false;
            }
        }
        
        return true;
    }
};

// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        
        vector<ll> arr(n,0),brr(n,0);
        
        // increase the count of elements in first array
        for(ll i=0;i<n;i++)
            cin >> arr[i];
        
        
        // iterate through another array
        // and decrement the count of elements
        // in the map in which frequency of elements
        // is stored for first array
        for(ll i=0;i<n;i++)
            cin >> brr[i];
        Solution ob;
        cout << ob.check(arr,brr,n) << "\n";
    }
	return 0;
}  // } Driver Code Ends