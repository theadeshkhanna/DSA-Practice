class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();
        
        if (n == 2) {
            return true;
        }
        
        for (int i = 0; i <= n - 3; i++) {
            vector<int> one = coordinates[i];
            vector<int> two = coordinates[i+1];
            vector<int> three = coordinates[i+2];
            
            int prod1 = (two[1] - one[1]) * (three[0] - two[0]);
            int prod2 = (two[0] - one[0]) * (three[1] - two[1]);
            
            if (prod1 != prod2) {
                return false;
            }
            
        }
        
        return true;
    }
};