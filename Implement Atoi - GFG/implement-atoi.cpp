// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        int n = s.size();
        int res = 0;
        int sign = 1;
        int i = 0;
        
        if(s[i]=='-') {
            sign = -1;
            i++;
        }
    
        while(s[i]) {
            int elem = s[i] - '0';
            if (elem >= 0 && elem <= 9) {
                res = res * 10 + elem;
            } else {
                return -1;
            }
            i++;
        }
        
        return res * sign;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends