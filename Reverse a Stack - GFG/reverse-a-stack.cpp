// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> Reverse(stack<int> s){
        vector<int> ans;
        solve(s);
        
        while(s.size() != 0) {
            ans.push_back(s.top());
            s.pop();
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
    
    void solve(stack<int>& s) {
        if (s.size() == 1) {
            return;
        }
        
        int a = s.top();
        s.pop();
        solve(s);
        insert(s, a);
    }
    
    void insert(stack<int>& s, int t) {
        if (s.size() == 0) {
            s.push(t);
            return;
        }
        
        int a = s.top();
        s.pop();
        insert(s, t);
        s.push(a);
    }
};

// { Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        vector<int> ans=ob.Reverse(St);
        for(int i=0;i<N;i++){
            cout<<ans[i];
            if(i!=N-1) cout<<" ";
        }
        cout<<endl;
    }
}  // } Driver Code Ends