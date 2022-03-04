class Solution {
public:
    int romanToInt(string str) {
        int n = str.size();
        int ans = 0;
        
        if (n == 1) {
            if (str[0] == 'I') {
                return 1;
            } else if (str[0] == 'V') {
                return 5;
            } else if (str[0] == 'X') {
                return 10;
            } else if (str[0] == 'L') {
                return 50;
            } else if (str[0] == 'C') {
                return 100;
            } else if (str[0] == 'D') {
                return 500;
            } else if (str[0] == 'M') {
                return 1000;
            }
        } else {
            
            if (str[0] == 'I') {
                ans += 1;
            } else if (str[0] == 'V') {
                ans += 5;
            } else if (str[0] == 'X') {
                ans += 10;
            } else if (str[0] == 'L') {
                ans += 50;
            } else if (str[0] == 'C') {
                ans += 100;
            } else if (str[0] == 'D') {
                ans += 500;
            } else if (str[0] == 'M') {
                ans += 1000;
            }
            
            for (int i = 1; i < n; i++) {
            if (str[i] == 'I') {
                ans += 1;
            } else if (str[i] == 'V') {
                if (str[i-1] == 'I') {
                    ans += 3;   
                } else {
                    ans += 5;
                }
            } else if (str[i] == 'X') {
                if (str[i-1] == 'I') {
                    ans += 8;   
                } else {
                    ans += 10;
                }
            } else if (str[i] == 'L') {
                if (str[i-1] == 'X') {
                    ans += 30;   
                } else {
                    ans += 50;
                }
            } else if (str[i] == 'C') {
                if (str[i-1] == 'X') {
                    ans += 80;   
                } else {
                    ans += 100;
                }
            } else if (str[i] == 'D') {
                if (str[i-1] == 'C') {
                    ans += 300;   
                } else {
                    ans += 500;
                }
            } else if (str[i] == 'M') {
                if (str[i-1] == 'C') {
                    ans += 800;   
                } else {
                    ans += 1000;
                }
            }
        }   
        }
        
        return ans;
    }
};