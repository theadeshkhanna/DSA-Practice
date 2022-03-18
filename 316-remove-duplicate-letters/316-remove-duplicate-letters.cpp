class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n = s.size();
        stack<char> st;
        vector<int> freq(26, 0);
        vector<bool> exists(26, false);
        string ans;
        
        for (int i = 0; i < n; i++) {
            freq[s[i] - 'a']++;
        }
        
        for (int i = 0; i < n; i++) {
            freq[s[i] - 'a']--;
            
            if (exists[s[i] - 'a']) continue;
            
            while(
                st.size() > 0 && 
                st.top() > s[i] && 
                freq[st.top() - 'a'] > 0
            ) {
                char rem = st.top();
                st.pop();
                exists[rem - 'a'] = false;
            }
            
            st.push(s[i]);
            exists[s[i] - 'a'] = true;
        }
        
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};