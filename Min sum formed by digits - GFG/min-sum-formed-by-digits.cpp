// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    long long int minSum(int arr[], int n)
    {
        priority_queue<int, vector<int>, greater<int>> pq(arr, arr + n);
        long long int n1 = 0;
        long long int n2 = 0;
        int flag = 0;
        
        while(pq.size() > 0) {
            if (flag == 0) {
                n1 = n1 * 10 + pq.top();
                pq.pop();
                flag = 1;
            } else {
                n2 = n2 * 10 + pq.top();
                pq.pop();
                flag = 0;
            }
        }
        
        return n1 + n2;
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
        int arr[n+1];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.minSum(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends