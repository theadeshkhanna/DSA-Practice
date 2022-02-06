class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int sum = 0;
        int cnt = seats.size();
        
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        
        for (int i = 0; i < cnt; i++) {
            sum += abs(seats[i] - students[i]);
        }
        
        return sum;
    }
};