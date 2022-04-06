// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
//User function template for C++

// binArray is an array that consists only 0s and 1s
// return sorted binary array 
class Solution{
    public:
    vector<int> SortBinaryArray(vector<int> a)
    {
        int cnt0 = 0;
        int n = a.size();
        
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) cnt0++;
        }
        
        int cnt1 = n - cnt0;
        
        vector<int> ans;
        
        for (int i = 0; i < cnt0; i++) {
            ans.push_back(0);
        }
        
        for (int i = 0; i < cnt1; i++) {
            ans.push_back(1);
        }
        
        return ans;
    }
};

// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> binArray(n);
	    
	    for(int i = 0; i  < n; i++)
	      cin>>binArray[i];
	    Solution ob;  
	  	vector<int> result = ob.SortBinaryArray(binArray);
	  	for(int i=0; i<n; i++)
	  	    cout<<result[i]<<" ";
	      
	    cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends