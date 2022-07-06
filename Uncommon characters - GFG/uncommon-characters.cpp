// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            set<char> sa(A.begin(), A.end());
            set<char> sb(B.begin(), B.end());
            
            int arr[26] = {0};
            
            int n = A.size();
            int m = B.size();
            
            string ans = "";
            
            for (auto c: sa) {
                if (arr[c - 'a'] == 1) continue;
                arr[c - 'a'] = 1;
            }
            
            for (auto c: sb) {
                if (arr[c - 'a'] == 1) {
                    arr[c - 'a'] = 0;
                } else {
                   arr[c - 'a'] = 1; 
                }
            }
            
            for (int i = 0; i < 26; i++) {
                if (arr[i] == 1) {
                    ans += (i + 'a');
                }
            }
            
            sort(ans.begin(), ans.end());
            return ans.size() == 0 ? "-1" : ans;
        }
};



// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends