//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

    void reverse(int i, string &S) {
        if (i >= S.size() / 2) return;
        swap(S[i], S[S.size() - i - 1]);
        reverse(i + 1, S);
    }
	
	
	int isPalindrome(string S)
	{
	    string P = S;
	    reverse(0, S);
	    return P == S;
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends