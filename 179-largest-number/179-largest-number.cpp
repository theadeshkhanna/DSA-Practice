class Solution {
public:
    bool static compare(string s1, string s2) {
        string one = s1+s2;
        string two = s2+s1;
        
        for (int i = 0; i < one.size(); i++) {
            if (one[i] > two[i]) {
                return true;
            } else if (one[i] < two[i]) {
                return false;
            }
        }
        
        return false;
    }
    
    string largestNumber(vector<int>& nums) {
        vector<string> v;
        
        for (int i = 0; i < nums.size(); i++) {
            v.push_back(to_string(nums[i]));
        }
        
        sort(v.begin(), v.end(), compare);
        
        string ans = "";
        
        for (int i = 0; i < v.size(); i++) {
            ans += v[i];
        }
        
        while(ans[0]=='0' && ans.length()>1)
            ans.erase(0,1);
        return  ans;
        
    }
};