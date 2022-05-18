// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int MAX_CHAR = 26;

 // } Driver Code Ends
class Solution
{
    public:
    string rearrangeString(string s)
    {
        priority_queue<pair<int, char>> pq;
        unordered_map<char, int> m;
        string ans;
        
        int n = s.size();
        
        for (int i = 0; i < n; i++) {
            m[s[i]]++;
        }
        
        for (auto c: m) {
            pq.push({c.second, c.first});
        }
        
        while(pq.size() > 1) {
            auto a = pq.top();
            pq.pop();
            
            auto b = pq.top();
            pq.pop();
            
            ans += a.second;
            ans += b.second;
            
            a.first -= 1;
            b.first -= 1;
            
            if (a.first > 0) {
                pq.push(a);
            }
            
            if (b.first > 0) {
                pq.push(b);
            }
        }
        
        if (pq.size() > 0) {
            if (pq.top().first > 1) {
                return "-1";
            } else {
                ans += pq.top().second;
            }
        }
        
        return ans;
    }
    
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution ob;
	    string str1=ob.rearrangeString(str);
	    int flag=1;
	    int c[26] = {0};
	    for(int i=0; i<str.length(); i++)
	        c[str[i]-'a']+=1;
	    int f = 0;
	    int x = (str.length()+1)/2;
	    for(int i=0; i<26; i++)
	    {
	        if(c[i]>x)
	            f = 1;
	    }
	    if(f)
	    {
	        if(str1=="-1")
	            cout<<0<<endl;
	        else
	            cout<<1<<endl;
	    }
	    else
	    {
    	    int a[26] = {0};
    	    int b[26] = {0};
    	    for(int i=0; i<str.length(); i++)
    	        a[str[i]-'a']+=1;
    	    for(int i=0; i<str1.length(); i++)
    	        b[str1[i]-'a']+=1;
    	        
    	    for(int i=0; i<26; i++)
    	        if(a[i]!=b[i])
    	            flag = 0;
    	    
    	    for(int i=0;i<str1.length();i++)
    	    {
    		    if(i>0)
    		        if(str1[i-1]==str1[i])
    			        flag=0;
    	    }
    	    if(flag==1)
    		    cout<<"1\n";
    	    else
    	        cout<<"0\n";
	    }
	}
    return 0;
}  // } Driver Code Ends