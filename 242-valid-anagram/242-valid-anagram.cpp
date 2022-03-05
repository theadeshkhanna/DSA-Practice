class Solution {
public:
    bool isAnagram(string a, string b) {
        int n = a.size();
        int m = b.size();
        
        map<char, int> m1;
        map<char, int> m2;
        map<char, int>::iterator it1;
        map<char, int>::iterator it2;
        
        for (int i = 0; i < n; i++) {
            m1[a[i]]++;
        }
        
        for (int i = 0; i < m; i++) {
            m2[b[i]]++;
        }
        
        for (it1=m1.begin(); it1!=m1.end(); it1++) {
            char elem = it1->first;
            if (m2.count(elem) <= 0) {
                return false;
            } else {
                int cnt = m2[elem];
                if (cnt != it1->second) {
                    return false;
                }
            }
        }
        
        for (it2=m2.begin(); it2!=m2.end(); it2++) {
            char elem = it2->first;
            if (m1.count(elem) <= 0) {
                return false;
            } else {
                int cnt = m1[elem];
                if (cnt != it2->second) {
                    return false;
                }
            }
        }
        
        return true;
    }
};