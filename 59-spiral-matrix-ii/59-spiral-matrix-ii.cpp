class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n,0));
        
        int top = 0;
        int down = ans.size() - 1;
        int left = 0;
        int right = ans[0].size() - 1;
        int dir = 0;
        int k = 1;
        
        while(top <= down && left <= right) {
            if (dir == 0) {
                for (int i = left; i <= right; i++) {
                    ans[top][i] = k++;
                }
                top++;
            } else if (dir == 1) {
                for (int i = top; i <= down; i++) {
                    ans[i][right] = k++;
                }
                right--;
            } else if (dir == 2) {
                for (int i = right; i >= left; i--) {
                    ans[down][i] = k++;
                }
                down--;
            } else if (dir == 3) {
                for (int i = down; i >= top; i--) {
                    ans[i][left] = k++;
                }
                left++;
            }
            
            dir = (dir + 1) % 4;
        }
        
        return ans;
    }
};