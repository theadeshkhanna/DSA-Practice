// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        vector<vector<int>> ans;
        int n = arr.size();
        
        if (n == 0) {
            return ans;
        }
        
        sort(arr.begin(), arr.end());
        
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int front = j + 1;
                int back = n - 1;
                
                int k2 = k - arr[i] - arr[j];
                
                while(front < back) {
                    int sum2 = arr[front] + arr[back];
                    
                    if (sum2 < k2) {
                        front++;
                    } else if (sum2 > k2) {
                        back--;
                    } else {
                        vector<int> v(4, 0);
                        
                        v[0] = arr[i];
                        v[1] = arr[j];
                        v[2] = arr[front];
                        v[3] = arr[back];
                        
                        ans.push_back(v);
                        
                        while(front < back && arr[front] == v[2]) front++;
                        while(front < back && arr[back] == v[3]) back--;
                    }
                }
                
                while(j + 1 < n && arr[j + 1] == arr[j]) j++;
            }
            
            while(i + 1 < n && arr[i + 1] == arr[i]) i++;
        }
        
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends