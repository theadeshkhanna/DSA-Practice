// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
/*You are required to complete this method */

class Solution
{
    public:
    int josephus(int n, int k) {
        vector<int> v;
        k = k - 1;
        int idx = 0;

        for (int i = 1; i <= n; i++) {
            v.push_back(i);
        }
        
        solve(k, idx, v);
        
        return v[0];
    }
    
    void solve(int k, int idx, vector<int>& v) {
        if (v.size() == 1) {
            return;
        }
        
        idx = (idx + k) % v.size();
        v.erase(v.begin() + idx);
        
        solve(k, idx, v);
    }
};



// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}  // } Driver Code Ends