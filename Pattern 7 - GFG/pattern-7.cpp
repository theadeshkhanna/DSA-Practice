//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        int maxV = 2 * n - 1;
        for (int i = 1; i <= n; i++) {
            int va = 2 * i - 1;
            
            int rest = maxV - va;
            
            for (int j = 0; j < rest / 2; j++) {
                cout << " ";
            }
            
            for (int j = 0; j < va; j++) {
                cout << "*";
            }
            
            cout << endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends