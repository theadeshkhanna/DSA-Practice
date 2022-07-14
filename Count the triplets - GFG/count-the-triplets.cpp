// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int countTriplet(int arr[], int n) {
	    sort(arr, arr + n);
	    int cnt = 0;
	    
	    for (int i = 0; i < n; i++) {
	        int s = arr[i];
	        int l = 0;
	        int h = n - 1;
	        
	        while(l < h) {
	            if (arr[l] + arr[h] == s) {
	                cnt++;
	                l++;
	                h--;
	            } else if (arr[l] + arr[h] < s) {
	                l++;
	            } else {
	                h--;
	            }
	        }
	    }
	    
	    return cnt;
	    
	}
};

// { Driver Code Starts.


int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

        Solution ob;
        cout << ob.countTriplet(arr, n) << "\n";

    }

    return 0;
}  // } Driver Code Ends