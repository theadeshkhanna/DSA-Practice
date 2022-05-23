class Solution {
public:
    int evalRPN(vector<string>& t) {
        stack<int> s;
        int n = t.size();
        
        for (int i = 0; i < n; i++) {
            if (t[i] == "+" || t[i] == "-" || t[i] == "*" || t[i] == "/") {
                int a = s.top(); 
                s.pop();
                int b = s.top();
                s.pop();
                
                if(t[i] == "+") a = b + a;
			    if(t[i] == "-") a = b - a;
			    if(t[i] == "/") a = b / a;
			    if(t[i] == "*") a = b * a;   
			    s.push(a);
            } else {
                s.push(stoi(t[i]));
            }
           
        }
         return s.top();
    }
};