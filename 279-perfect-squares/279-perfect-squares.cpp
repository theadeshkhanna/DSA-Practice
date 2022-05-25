class Solution {
public:
    int numSquares(int n) {
        if (sqrt(n) == floor(sqrt(n))) {
            return 1;
        }

        int* ans = new int[n + 1];

        ans[0] = 0;
        ans[1] = 1;

        for (int i = 2; i <= n; i++) {
            int min = i;
            for (int j = 1; j * j <= i; j++) {
                int left = i - j * j;
                if (ans[left] < min) {
                    min = ans[left];
                }
            }
            ans[i] = 1 + min;
        }

        return ans[n];
    }
};