class Solution {
public:
    bool isPalindrome(int x) {
        string num = to_string(x);
        reverse(num.begin(), num.end());
        return num == to_string(x);
    }
};