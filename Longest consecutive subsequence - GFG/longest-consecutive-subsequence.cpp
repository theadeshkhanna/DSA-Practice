// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int nums[], int n)
    {
        int finalLength = 0;
        unordered_set<int> s;
        
        for (int i = 0; i < n; i++) {
            s.insert(nums[i]);
        }
        
        for (int i = 0; i < n; i++) {
            if (!s.count(nums[i] - 1)) {
                int elem = nums[i];
                int length = 1;
                
                while(s.count(elem + 1)) {
                    elem += 1;
                    length += 1;
                }
                
                finalLength = max(finalLength, length);
            }
        }
        
        return finalLength;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends