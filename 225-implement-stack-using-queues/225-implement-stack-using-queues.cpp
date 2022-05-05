class MyStack {
public:
    queue<int> q1;
    queue<int> q2;
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        if (q2.size() == 0) {
            q2.push(x);
        } else {
            while(q2.size() != 0) {
                q1.push(q2.front());
                q2.pop();
            }
            
            q2.push(x);
            
            while(q1.size() != 0) {
                q2.push(q1.front());
                q1.pop();
            }
        }
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int a = q2.front();
        q2.pop();
        return a;
    }
    
    /** Get the top element. */
    int top() {
        return q2.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q2.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */