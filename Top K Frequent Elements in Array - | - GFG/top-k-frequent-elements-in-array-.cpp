// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        unordered_map<int, int>::iterator it;
        vector<int> v;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            m[nums[i]]++;
        }
        
        for (it = m.begin(); it != m.end(); it++) {
            pq.push({it->second, it->first});
            if (pq.size() > k) pq.pop();
        }
        
        while(pq.size() > 0) {
            v.push_back(pq.top().second);
            pq.pop();
        }
        
        reverse(v.begin(), v.end());
        
        return v;
    }
};


// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends