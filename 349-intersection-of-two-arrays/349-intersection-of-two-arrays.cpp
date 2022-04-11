class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        int n = nums1.size();
        int m = nums2.size();
        
        int i = 0;
        int j = 0;
        
        vector<int> ans;
        vector<int> res;
        map<int, int> k;
        map<int, int>::iterator it;
        
        while(i < n && j < m) {
            if (nums1[i] == nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
                j++;
            } else if (nums1[i] < nums2[j]) {
                i++;
            } else {
                j++;
            }
        }
        
        for(int i = 0; i < ans.size(); i++) k[ans[i]]++;
        
        for (it=k.begin(); it!=k.end(); it++) {
            res.push_back(it->first);
        }
        
        return res;
    }
};