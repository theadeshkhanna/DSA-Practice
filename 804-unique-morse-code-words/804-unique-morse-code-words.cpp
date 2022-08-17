class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        map<string, int> m;
        int cnt = 0;
        map<string, int>::iterator it;
        vector <string> ans;
        for (int i = 0; i < words.size(); i++) {
            string bew = "";
            for (int j = 0; j < words[i].size(); j++) {
                bew += morse[words[i][j] - 97];
            }
            ans.push_back(bew);
        }
        
        for (int i = 0; i < ans.size(); i++) {
            m[ans[i]]++;
        }
                
        for (it= m.begin(); it!=m.end(); it++) {
            cnt++;
        }        
        
        return cnt;
    }
};