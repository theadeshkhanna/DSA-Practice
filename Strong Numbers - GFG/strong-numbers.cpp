// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
	public:
		int is_StrongNumber(int n)
		{
		    int sum = 0;
		    int orig = n;
		    while(n) {
		        sum += fact(n % 10);
		        n = n / 10;
		    }
		    
		  return orig == sum;
		}
		
		int fact(int n) {
		    if (n == 1 || n == 0) {
		        return 1;
		    }
		    
		    return fact(n - 1) * n;
		}
};


// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.is_StrongNumber(n);
    	cout << ans <<"\n";
    }
	return 0;
}
  // } Driver Code Ends