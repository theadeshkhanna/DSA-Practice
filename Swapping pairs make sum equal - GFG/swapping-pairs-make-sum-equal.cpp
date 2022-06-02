// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int findSwapValues(int A[], int n, int B[], int m)
	{
        int a = 0;
        int b = 0;
        int i = 0;
        int j = 0;
        
        sort(A, A + n);
        sort(B, B + m);
        
        for (int i = 0; i < n; i++) {
            a += A[i];
        }
        
        for (int i = 0; i < m; i++) {
            b += B[i];
        }
        
        while(i < n && j < m) {
            int fa = a - A[i] + B[j];
            int fb = b - B[j] + A[i];
            
            if (fa == fb) return 1;
            else if (fa < fb) j++;
            else i++;
        }
        
        return -1;
	}
 

};

// { Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        

        Solution ob;
        cout <<  ob.findSwapValues(a, n, b, m);
	    cout << "\n";
	     
    }
    return 0;
}





  // } Driver Code Ends