// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> kthLargest(int k, int arr[], int n) {
        priority_queue<int, vector<int>, greater<int>> pq;
        vector<int> v;
        for (int i = 0; i < n; i++) {
            if (i < k - 1) {
                pq.push(arr[i]);
                v.push_back(-1);
            } else {
                pq.push(arr[i]);
                if (pq.size() > k) pq.pop();
                v.push_back(pq.top());
            }
        }
        
        return v;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k,n;
        cin>>k>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];

        Solution ob;
        vector<int> v = ob.kthLargest(k,arr,n);
        for(int i : v)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends