// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	int MinCoin(vector<int>nums, int amount)
	{
	   int n = nums.size();
	   int t[n + 1][amount + 1];
	   
	   for (int i = 0; i <= n; i++) {
	       for (int j = 0; j <= amount; j++) {
	           if (j == 0) {
	               t[i][j] = 0;
	           }
	           
	           if (i == 0) {
	               t[i][j] = INT_MAX - 1;
	           }
	       }
	   }
	   
	   for (int j = 1; j <= amount; j++) {
	       if (j % nums[0] == 0) {
	           t[1][j] = j / nums[0];
	       } else {
	           t[1][j] = INT_MAX - 1;
	       }
	   }
	   
	   for (int i = 2; i <= n; i++) {
	       for (int j = 1; j <= amount; j++) {
	            if (nums[i - 1] <= j) {
	                t[i][j] = min(1 + t[i][j - nums[i - 1]], t[i - 1][j]);
	            } else {
	                t[i][j] = t[i - 1][j];
	            }
	       }
	   }
	   
	   return t[n][amount] == INT_MAX - 1 ? -1 : t[n][amount];
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, amount;
		cin >> n >> amount;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.MinCoin(nums, amount);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends