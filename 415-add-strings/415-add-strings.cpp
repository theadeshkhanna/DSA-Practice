class Solution {
public:
    string addStrings(string num1, string num2) {
        
        if (num1 == "0" && num2 == "0") return "0";
        if (num1 == "0" && num2 != "0") return num2;
        if (num1 != "0" && num2 == "0") return num1;
        
        int n1 = num1.size();
        int n2 = num2.size();
        
        vector<int> ans(max(n1,n2)+1, 0);
        int i = n1 - 1;
        int j = n2 - 1;
        int k = ans.size() - 1;
        int carry = 0;
        
        while(k >= 0) {
            int sum = 0;
            
            if (i >= 0) {
                sum += num1[i] - '0';
            }
            
            if (j >= 0) {
                sum += num2[j] - '0';
            }
            
            sum += carry;
             
            ans[k] = sum % 10;
            carry = sum / 10;
            k--;
            i--;
            j--;
        }
        
        string res;
        bool flag = false;
        
        for (int i = 0; i < ans.size(); i++) {
            if (ans[i] == 0 && flag == false) {
                continue;
            } else {
                flag = true;
                res += ans[i] + '0';
            }
        }
        
        return res;
    }
};