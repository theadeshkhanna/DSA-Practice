// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> s;
        for (int i = 0; i < x.size(); i++) {
            switch(x[i]) {
                case '(' : 
                case '{' : 
                case '[' : s.push(x[i]);
                break;
                case ')' : if (s.empty() || s.top() != '(') {
                    return false;
                } else s.pop();
                break;
                case '}' : if (s.empty() || s.top() != '{') {
                    return false;
                } else s.pop();
                break;
                case ']' : if (s.empty() || s.top() != '[') {
                    return false;
                } else s.pop();
                break;
            }
        }
        
        return s.empty();
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends