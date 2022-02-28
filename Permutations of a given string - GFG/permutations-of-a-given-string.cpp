// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	
	    bool static compare (string a, string b) {return a<b;} 
	    
		vector<string>find_permutation(string s) {
		    vector<string> ans;
		    string t;
		    recurse(s, ans, t);
		    sort(ans.begin(), ans.end(), compare);
		    return ans;
		}
		
		void recurse(string s, vector<string>& ans, string t) {
		    if (s.size() == 0) {
		        ans.push_back(t);
		        return;
		    }
		    
		    for (int i = 0; i < s.size(); i++) {
		        char ch = s[i];
		        string left = s.substr(0, i);
		        string right = s.substr(i+ 1);
		        string rest = left + right;
		        recurse(rest, ans, t+ch);
		    }
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends