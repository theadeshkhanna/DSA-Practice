// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int longestSubstrDistinctChars (string s)
{
    vector<int> freq(256, -1);
    int n = s.size();
    int len = INT_MIN;
    int start = -1;
    
    for (int i = 0; i < n; i++) {
        if (freq[s[i]] > start) {
            start = freq[s[i]];
        }
        
        freq[s[i]] = i;
        len = max(len, i - start);
    }
    
    return len;
}