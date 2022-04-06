class Solution {
public:
    int arrangeCoins(int n) {
        int a = n, i = 1;
        vector<int> v;
        
        while(a >= 0) {
           if (i <= a) v.push_back(i);
           a -= i; 
           i++;
        }
        
        return v[v.size() - 1];
    }
};