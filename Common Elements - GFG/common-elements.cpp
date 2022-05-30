// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
    public:
        vector<int> common_element(vector<int>v1,vector<int>v2)
    {
       unordered_map<int, int> x;
       unordered_map<int, int> y;
       
       vector<int> v;
       
       int n = v1.size();
       int m = v2.size();
       
       for (int i = 0; i < n; i++) {
           x[v1[i]]++;
       }
       
       for (int i = 0; i < m; i++) {
           y[v2[i]]++;
       }
       
       for (auto c: x) {
           if (y.find(c.first) != y.end()) {
               if (c.second == y[c.first]) {
                   for (int i = 0; i < c.second; i++) {
                       v.push_back(c.first);
                   }
               } else {
                   int mini = c.second < y[c.first] ? c.second : y[c.first];
                   for (int i = 0; i < mini; i++) {
                       v.push_back(c.first);
                   }
               }
           }
       }
       
       sort(v.begin(), v.end());
       return v;}
};

// { Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int>v1(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        int m;
        cin>>m;
        vector<int>v2(m,0);
        for(int i=0;i<m;i++)
        {
            cin>>v2[i];
        }
        Solution ob;
        vector<int>result;
        result=ob.common_element(v1,v2);
        for(auto i:result)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        
    }
}  // } Driver Code Ends