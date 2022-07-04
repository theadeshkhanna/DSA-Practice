// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}// } Driver Code Ends


string firstRepChar(string s)
{
    unordered_map<char, int> m;
    int n = s.size();
    string ans = "";
    
    for (int i = 0; i < n; i++) {
        if (m.count(s[i]) == 1) {
            ans = s[i];
            break;
        } else {
            m[s[i]]++;
        }
    }
    
    return ans.size() > 0 ? ans : "-1";
}