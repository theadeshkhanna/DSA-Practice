class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        
        if (n == 2) return 1;
        
        int ans = 0;
        int cnt = 0;
        int i = 0;
        unordered_map<int, int> m;
        vector<int> v;
        
        for (int i = 0; i < n; i++) {
            m[arr[i]]++;
        }
        
        for (auto c: m) {
            v.push_back(c.second);
        }
        
        sort(v.begin(), v.end(), greater<int>());
        
        while(ans < n / 2) {
            cnt++;
            ans += v[i++];
        }
        
        return cnt;
    }
};