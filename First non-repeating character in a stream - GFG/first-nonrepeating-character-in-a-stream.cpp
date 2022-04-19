// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string a){
		    int n = a.size();
		    vector<int> freq(26, 0);
		    vector<char> v;
		    string ans = "";
		    
		    for (int i = 0; i < n; i++) {
		        if (!freq[a[i] - 'a']) {
		            v.push_back(a[i]);
		        }
		        
		        freq[a[i] - 'a']++;
		        
		        int m = v.size();
		        int flag = 0;
		        
		        for (int j = 0; j < m; j++) {
		            if (freq[v[j] - 'a'] == 1) {
		                ans.push_back(v[j]);
		                flag = 1;
		                break;
		            }
		        }
		        
		        if (flag == 0) ans.push_back('#');
		    }
		    return ans;
		    
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends