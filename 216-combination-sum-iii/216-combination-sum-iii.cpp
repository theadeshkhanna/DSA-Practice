class Solution {
public:
    vector<vector<int>> result;
    
    int sum(vector<int>& values) {
        int ans = 0;
        for (auto x: values) ans += x;
        return ans;
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> values;
        combinations(1, k, n, values);
        return result;
    }
    
    void combinations(int num, int k, int n, vector<int>& values) {
        if (k == 0){
            if (sum(values) == n){
                result.push_back(values);
            }
            return;
        }
        
        if (num > 9) return;
        
        values.push_back(num);
        combinations(num + 1, k - 1, n, values);
        values.pop_back();
        combinations(num + 1, k, n, values); 
    }
};