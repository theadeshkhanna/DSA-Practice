class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        
        int maxSpace = 0;
        for (int i = 0; i < n; i++) {
            int space = 0;
            for (int j = 0; j < sentences[i].size(); j++) {
                if (sentences[i][j] == ' ') {
                    space++;
                }
            }
            maxSpace = max(maxSpace, space);
        }
        
        return maxSpace + 1;
    }
};