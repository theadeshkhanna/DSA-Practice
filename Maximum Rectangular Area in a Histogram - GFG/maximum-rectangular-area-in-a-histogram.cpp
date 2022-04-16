// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    long long* getNSR(long long arr[], int n) {
        long long *v =  new long long [n];
        stack<pair<int, int>> s;
        int pseudoIndex = n;
        
        for (int i = n - 1; i >= 0; i--) {
            if (s.size() == 0) v[i] = pseudoIndex;
            else if (s.size() > 0 && s.top().first < arr[i]) v[i] = s.top().second;
            else if (s.size() > 0 && s.top().first >= arr[i]) {
                while(s.size() > 0 && s.top().first >= arr[i]) s.pop();
                if (s.size() == 0) v[i] = pseudoIndex;
                else v[i] = s.top().second;
            }    
            s.push({arr[i], i});
        }
        
        return v;
    }
    
    long long* getNSL(long long arr[], int n) {
        long long *v = new long long [n];
        stack<pair<int, int>> s;
        int pseudoIndex = -1;
        
        for (int i = 0; i < n; i++) {
            if (s.size() == 0) v[i] = pseudoIndex;
            else if (s.size() > 0 && s.top().first < arr[i]) v[i] = s.top().second;
            else if (s.size() > 0 && s.top().first >= arr[i]) {
                while(s.size() > 0 && s.top().first >= arr[i]) s.pop();
                if (s.size() == 0) v[i] = pseudoIndex;
                else v[i] = s.top().second;
            }    
            s.push({arr[i], i});
        }
        
        return v;
    }
    
    long long getMaxArea(long long arr[], int n) {
        long long *width = new long long [n];
        long long *area = new long long [n];
        long long ans = INT_MIN;
        long long *left = getNSL(arr, n);
        long long *right = getNSR(arr, n);
        
        for (int i = 0; i < n; i++) {
            width[i] = right[i] - left[i] - 1;
        }
        
        for (int i = 0; i < n; i++) {
            area[i] = width[i] * arr[i];
        }
        
        for (int i = 0; i < n; i++) {
            ans = max(ans, area[i]);
        }
        
        return ans;
    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends