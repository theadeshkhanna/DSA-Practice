// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        int n = s.size();
        int r = 0;
        string ans = "";
        
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '.') {
                r = n - i;
                n = i - 1;
                ans.append(s.substr(i+1, r));
                ans.append(".");   
            }
        }
        
        ans.append(s.substr(0, n + 1));
        return ans;
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends