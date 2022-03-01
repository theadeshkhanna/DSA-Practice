class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        v.push_back(0);
        for (int i = 1; i <= n; i++) {
            v.push_back(one(i));
        }
        return v;
    }
    
    int one(int n) {
        int cnt = 0;
        while(n) {
            n = n & (n - 1);
            cnt++;
        }
        return cnt;
    }
};