// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        int n = str.size();
        int ans = INT_MAX;
        unordered_map<char, int> m;
        
        for (int i = 0; i < n; i++) {
            if (m.count(str[i]) > 0) {
                continue;
            } else {
                m[str[i]] = i;
            }
        }
        
        for (int j = 0; j < patt.size(); j++) {
            if (m.count(patt[j]) > 0) {
                ans = min(ans, m[patt[j]]);
            }
        }
        
        return ans == INT_MAX ? -1 : ans;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        string str;
        string patt;
        cin>>str;
        cin>>patt;
        Solution obj;
        cout<<obj.minIndexChar(str, patt)<<endl;
    }
	return 0;
}
  // } Driver Code Ends