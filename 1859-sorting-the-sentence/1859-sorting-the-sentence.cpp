class Solution {
public:
    string sortSentence(string s) {
        int n = s.size();
        map<int, string> m;
        map<int, string>::iterator it;
        string ans = "";
        int len = n - 1;

        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == ' ') {
                m[s[len] - '0'] = s.substr(i+1, len - i - 1);
                len = i - 1;
            }
        }
        
        m[s[len] - '0'] = s.substr(0, len);
                
        for (it=m.begin(); it!=m.end(); it++) {
            ans += it->second;
            ans += " ";
        }
        
        return ans.substr(0, ans.size() - 1);
    }
};