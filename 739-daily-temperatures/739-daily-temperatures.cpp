class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int> v;
        stack<int> s;
        
        int n = t.size();
        
        for (int i = n - 1; i >= 0; i--) {
            if (s.size() == 0) {
                v.push_back(0);
            } else if (s.size() > 0 && t[s.top()] > t[i]) {
                v.push_back(s.top());
            } else if (s.size() > 0 && t[s.top()] <= t[i]) {
                while(s.size() > 0 && t[s.top()] <= t[i]) {
                    s.pop();
                }
                
                if (s.size() == 0) {
                    v.push_back(0);
                } else {
                    v.push_back(s.top());
                }
            }
            
            s.push(i);
        }
        
        reverse(v.begin(), v.end());
        
        for (int i = 0; i < v.size(); i++) {
            if (v[i] > 0) {
                v[i] -= i;
            }
        }
        
        return v;
    }
};