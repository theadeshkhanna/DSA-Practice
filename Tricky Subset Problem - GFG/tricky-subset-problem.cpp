// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int isPossible(long long s, long long n, long long x, long long A[])
    {
        vector<long long> v;
        v.push_back(s);
        long long curr = s;
        for (long long i = 0; i < n; i++) {
            long long temp = curr + A[i];
            v.push_back(temp);
            if (temp >= x) break;
            curr += temp;
        }
        
        for (long long i = v.size() - 1; i >= 0; i--) {
            if (x >= v[i]) {
                x -= v[i];
            }
        }
        
        if (x == 0) return 1;
        else return 0;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long S, N, X;
        cin>>S>>N>>X;
        long long A[N];
        for(long long i = 0;i < N;i++)
            cin>>A[i];
        
        Solution ob;
        if(ob.isPossible(S, N, X, A))
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}  // } Driver Code Ends