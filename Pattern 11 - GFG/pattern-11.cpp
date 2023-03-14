//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                if (i % 2 == 0) {
                    if (j % 2 != 0) {
                        cout << "0 ";
                    } else {
                        cout << "1 ";
                    }
                } else {
                    if (j % 2 != 0) {
                        cout << "1 ";
                    } else {
                        cout << "0 ";
                    }
                }
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