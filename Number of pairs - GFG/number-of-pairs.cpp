// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
 

class Solution{
    public:
    
    long long countPairs(int x[], int y[], int m, int n)
    {
        sort(x, x+m);
        sort(y, y+n);
        int zero = 0, one = 0, two = 0, three = 0, four = 0;
        long ans = 0;
        
        for (int i = 0; i < n; i++) {
            if (y[i] == 0) zero++;
            else if (y[i] == 1) one++;
            else if (y[i] == 2) two++;
            else if (y[i] == 3) three++;
            else if (y[i] == 4) four++;
        }
        
        for (int i = 0; i < m; i++) {
            if (x[i] == 0) {
                continue;
            } else if (x[i] == 1) {
                ans += zero;
            } else if (x[i] == 2) {
                int *index = upper_bound(y, y+n, 2);
                ans += (y + n) - index;
                ans += zero + one;
                ans -= three;
                ans -= four;
            } else if (x[i] == 3) {
                int *index = upper_bound(y, y+n, 3);
                ans += (y + n) - index;
                ans += zero + one;
                ans += two;
            } else {
                int *index = upper_bound(y, y+n, x[i]);
                ans += (y + n) - index;
                ans += zero + one;
            }
        }
        
        return ans;
    }
};


// { Driver Code Starts.
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int M,N;
		cin>>M>>N;
		int i,a[M],b[N];
		for(i=0;i<M;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<N;i++)
		{
			cin>>b[i];
		}
		Solution ob;
		cout<<ob.countPairs(a, b, M, N)<<endl;
	}
}  // } Driver Code Ends