class Solution {
private:
     static int numberCount(int a) {
        int cnt = 0;
        while(a) {
            a = a & (a - 1);
            cnt++;
        } 
        return cnt;
    }
    
    static bool compare(int a, int b) {
        int p = numberCount(a);
        int q = numberCount(b);
        
        if (p == q) {
            return (a <= b);
        } else {
            return (p < q);
        }
    }
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), compare);
        return arr;
    }
};