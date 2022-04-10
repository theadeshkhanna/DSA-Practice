class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<string> c;
        int ans = 0;
        for (int i = 0; i < ops.size(); i++) {
            if (ops[i] == "D") {
                c.push(to_string(stoi(c.top()) * 2));
            } else if (ops[i] == "C") {
                c.pop();
            } else if (ops[i] == "+") {
                string top = c.top();
                c.pop();
                string stop = c.top();
                c.push(top);
                c.push(to_string(stoi(top) + stoi(stop)));
            } else {
                c.push(ops[i]);
            }
        }
        
        while(!c.empty()) {
            ans += stoi(c.top());
            c.pop();
        }
        
        return ans;
    }
};