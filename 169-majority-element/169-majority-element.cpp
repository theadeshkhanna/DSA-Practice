class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        double val = floor( n / 2 );
        map<int, int> m;
        map<int, int>::iterator it;
        for (int i = 0; i < n; i++) {
            m[nums[i]]++;
        }
        
        for (it=m.begin(); it!=m.end(); it++) {
            if (it->second > val) {
                return it->first;
            }
        }
        
        return 0;
    }
};