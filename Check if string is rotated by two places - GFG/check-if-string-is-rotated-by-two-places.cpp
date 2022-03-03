// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string s1, string s2)
    {
        string s21 = s2.substr(s2.size() - 2);
        string s22 = s2.substr(0, s2.size() - 2);
        
        string s23 = s21 + s22;
        
        if (s23 == s1) return true;
        
        s21 = s2.substr(2, s2.size());
        s22 = s2.substr(0, 2);
        
        s23 = s21 + s22;
        
        if (s23 == s1) return true;
        
        return false;
        
    }

};


// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}
  // } Driver Code Ends