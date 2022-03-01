class Solution {
public:
    int subtractProductAndSum(int n) {
        return productOfDigit(n) - sumOfDigit(n);
    }
    
    int sumOfDigit(int n) {
        int sum = 0;
        while(n) {
            int lastDigit = n % 10;
            sum += lastDigit;
            n = n / 10;
        }
        return sum;
    }
    
    int productOfDigit(int n) {
        int prod = 1;
        while(n) {
            int lastDigit = n % 10;
            prod *= lastDigit;
            n = n / 10;
        }
        return prod;
    }
};