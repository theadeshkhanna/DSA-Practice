class Solution {
public:
    void reverse(vector<int>& nums, int i, int j) {
        while(i < j) {
            swap(nums[i++], nums[j--]);
        }
    }
    
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        
        if (k < 0) {
            k = k + n;
        }
        
        reverse(nums, 0, n - 1 - k);
        reverse(nums, n - k, n - 1);
        reverse(nums, 0, n - 1);
    }
};