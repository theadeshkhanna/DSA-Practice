class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int first = 0;
        int second = n - 1;
        int counter = n - 1;
        vector<int> answer(n,0);
        
        while(first <= second) {
            int squareFirst = nums[first] * nums[first];
            int squareSecond = nums[second] * nums[second];
            if (squareFirst > squareSecond) {
                answer[counter] = squareFirst;
                first++;
            } else {
                answer[counter] = squareSecond;
                second--;
            }
            counter--;
        }
        
        return answer;
    }
};