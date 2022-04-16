class Solution {
public:
    vector<int> getNearestSmallestToRight(vector<int>& h) {
        vector<int> v;
        stack<pair<int, int>> s;
        
        int n = h.size();
        int pseudoIndex = n;
        
        for (int i = n - 1; i >= 0; i--) {
            if (s.size() == 0) {
                v.push_back(pseudoIndex);
            } else if (s.size() > 0 && s.top().first < h[i]) {
                v.push_back(s.top().second);
            } else if (s.size() > 0 && s.top().first >= h[i]) {
                while(s.size() > 0 && s.top().first >= h[i]) {
                    s.pop();
                }
                
                if (s.size() == 0) {
                    v.push_back(pseudoIndex);
                } else {
                    v.push_back(s.top().second);
                }
            }
            
            s.push({h[i], i});
        }
        
        reverse(v.begin(), v.end());
        return v;
    }
    
    vector<int> getNearestSmallestToLeft(vector<int>& h) {
        vector<int> v;
        stack<pair<int, int>> s;
        
        int n = h.size();
        int pseudoIndex = -1;
        
        for (int i = 0; i < n; i++) {
            if (s.size() == 0) {
                v.push_back(pseudoIndex);
            } else if (s.size() > 0 && s.top().first < h[i]) {
                v.push_back(s.top().second);
            } else if (s.size() > 0 && s.top().first >= h[i]) {
                while(s.size() > 0 && s.top().first >= h[i]) {
                    s.pop();
                }
                
                if (s.size() == 0) {
                    v.push_back(pseudoIndex);
                } else {
                    v.push_back(s.top().second);
                }
            }
            
            s.push({h[i], i});
        }
        
        return v;
    }
    
    int largestRectangleArea(vector<int>& h) {
        vector<int> left = getNearestSmallestToLeft(h);
        vector<int> right = getNearestSmallestToRight(h);
        int maxi = INT_MIN;
        
        for (int i = 0; i < h.size(); i++) {
            maxi = max(maxi, h[i] * (right[i] - left[i] - 1));
        }
        
        return maxi;
    }
};