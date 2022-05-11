// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        unordered_map<char, int> m;
        priority_queue<pair<int, char>> pq;
        int ans = 0;
        
        for (int i = 0; i < s.size(); i++) {
            m[s[i]]++;
        }
        
        for (auto c: m) {
            pq.push({c.second, c.first});
        }
        
        while(k--) {
            char e = pq.top().second;
            int freq = pq.top().first;
            pq.pop();
                
            pq.push({freq - 1, e});
        }
        
        while(pq.size() > 0) {
            ans += pq.top().first * pq.top().first;
            pq.pop();
        }
        
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}  // } Driver Code Ends