class Solution {
public:
    vector<string> ans;
    
    string getString(int num) {
        switch(num) {
            case 2 : return "abc";
            break;
            
            case 3 : return "def";
            break;
            
            case 4 : return "ghi";
            break;
            
            case 5 : return "jkl";
            break;
            
            case 6 : return "mno";
            break;
            
            case 7 : return "pqrs";
            break;
            
            case 8 : return "tuv";
            break;
            
            case 9 : return "wxyz";
            break;
        }
        return "";
    }
    
    vector<string> letterCombinations(string digits) {
        reverse(digits.begin(), digits.end());
        if (digits.size() < 1) return ans;
        int n = stoi(digits);
        string output = "";
        
        solve(n, output);
        
        return ans;
    }
    
    void solve(int n, string output) {
        
        if (n == 0) {
            ans.push_back(output);
        }
        
        int p = n % 10;
        string str = getString(p);
        
        for (int i = 0; i < str.size(); i++) {
            solve(n / 10, output + str[i]);
        }
    }
};