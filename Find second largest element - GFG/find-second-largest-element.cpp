// { Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
   public:
    int print2largest(int arr[], int n)
    {
    	priority_queue<int> pq;
    	map<int, int> m;
    	map<int, int>::iterator it;
    	
    	for (int i = 0; i < n; i++) {
    	    m[arr[i]]++;
    	}
    	
    	for (it=m.begin(); it!=m.end(); it++) {
    	    pq.push(it->first);
    	}
    	
    	pq.pop();
    	
    	return pq.size() == 0 ? -1 : pq.top();
    }

};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.print2largest(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}
  // } Driver Code Ends