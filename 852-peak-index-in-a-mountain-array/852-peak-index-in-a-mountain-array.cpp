class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int elem = *max_element(arr.begin(), arr.end());;
        
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == elem) return i;
        }
        
        return 0;
    }
};