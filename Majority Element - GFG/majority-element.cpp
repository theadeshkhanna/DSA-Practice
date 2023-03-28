//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int A[], int N)
    {
        
        int cnt = 0;
        int el;
        
        for (int i = 0; i < N; i++) {
            if (cnt == 0) {
                cnt = 1;
                el = A[i];
            } else if (el == A[i]) cnt++;
            else cnt--;
         }
         
         int cnt1 = 0;
         
         for (int i = 0; i < N; i++) {
             if (A[i] == el) cnt1++;
         }
         
         if (cnt1 > N / 2) return el;
         else return -1;
        
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends