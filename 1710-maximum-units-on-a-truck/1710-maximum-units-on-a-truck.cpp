class Solution {
public:
    bool static compare(vector<int> a, vector<int> b) {
        return a[1] > b[1];
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), compare);
        int ans = 0;
        
        for (int i = 0; i < boxTypes.size(); i++) {
            if (truckSize) {
                if (boxTypes[i][0] <= truckSize) {
                    ans += (boxTypes[i][1] * boxTypes[i][0]);
                    truckSize -= boxTypes[i][0];
                } else {
                    ans += (truckSize * boxTypes[i][1]);
                    truckSize = 0;
                }   
            }
        }
        
        return ans;
    }
};