class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        priority_queue<int> pq(s.begin(), s.end());
        
        while(pq.size() != 1) {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            pq.push(a - b);
        }
        
        return pq.top();
    }
};