class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char, int> m;
        int cnt = 0;
        for (int i = 0; i < allowed.size(); i++) {
            m[allowed[i]]++;
        }
        
        for (int j = 0; j < words.size(); j++) {
            int smlCnt = 0;
            for (int k = 0; k < words[j].size(); k++) {
                if (m.count(words[j][k]) > 0) {
                    smlCnt++;
                }
            }
            if (smlCnt == words[j].size()) {
                cnt++;
            }
        }
        
        return cnt;
    }
};