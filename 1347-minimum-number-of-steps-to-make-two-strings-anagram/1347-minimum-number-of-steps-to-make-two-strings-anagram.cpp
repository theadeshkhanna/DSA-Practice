class Solution {
public:
    int minSteps(string s, string t) {
        int f1[26] = { 0 };
        int f2[26] = { 0 };
        int n = s.size();
        int m = t.size();
   
        int i, c = 0;
   
        for (i = 0; i < n; i++){
            f1[s[i] - 'a']++;
        }
        
        for (i = 0; i < m; i++){
            f2[t[i] - 'a']++;
        }
  
        for (i = 0; i < 26; i++){
            c += (min(f1[i], f2[i]));
        }
        
        return n - c;
    }
};