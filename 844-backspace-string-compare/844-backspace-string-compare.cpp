class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string sn;
        string tn;
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '#' && sn.size() > 0) {
                sn.pop_back();
            } else {
                if (s[i] != '#') sn.push_back(s[i]);
            }
        }
        
        for (int i = 0; i < t.size(); i++) {
            if (t[i] == '#' && tn.size() > 0) {
                tn.pop_back();
            } else {
                if (t[i] != '#') tn.push_back(t[i]);
            }
        }
        
        return sn == tn;
    }
};