// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

 // } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
       if (x == 1) return 1;
       long long int lo = 1;
       long long int hi = x / 2;
       long long int res;
       
       while(lo <= hi) {
           long long int mid = lo + (hi - lo) / 2;
           long long int sq = mid * mid;
           
           if (sq == x) {
               return mid;
           } else if (sq < x) {
               lo = mid + 1;
               res = mid;
           } else {
               hi = mid - 1;
           }
       }
       
       return res;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}
  // } Driver Code Ends