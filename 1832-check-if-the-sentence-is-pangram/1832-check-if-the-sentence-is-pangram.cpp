class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<char, int> m;
        int n = sentence.size();
        
        for (int i = 0; i < n; i++) {
            m[sentence[i]]++;
        }
        
        return m.size() == 26;
    }
};