class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int n = plants.size();
        int cap = capacity;
        int cnt = 0;
        
        for (int i = 0; i < n; i++) {
            if (cap >= plants[i]) {
                cnt += 1;
            } else {
                cap = capacity;
                cnt += (2*i + 1);
            }
            cap -= plants[i];
        }
        
        return cnt;
    }
};