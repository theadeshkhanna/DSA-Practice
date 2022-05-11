// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    vector<int> TopK(vector<int>& a, int k)
    {
        unordered_map<int, int> m;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<int> v;
        
        int n = a.size();
        
        for (int i = 0; i < n; i++) {
            m[a[i]]++;
        }
        
        for (auto c: m) {
            pq.push({c.second, c.first});
            if (pq.size() > k) pq.pop();
        }
        
        while(pq.size() > 0) {
            v.push_back(pq.top().second);
            pq.pop();
        }
        
        reverse(v.begin(), v.end());
        
        return v;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k ;
        cin>>n;
        
        vector<int>array(n);
        
        for(int i=0; i<n; i++)
            cin>>array[i];
            
        cin>>k;
        
        Solution obj;
        vector<int> result = obj.TopK(array,k);
        
        for(int i=0; i<result.size();i++)
            cout<<result[i]<<" ";

        cout<<"\n";

    }
    return 0;
}  // } Driver Code Ends