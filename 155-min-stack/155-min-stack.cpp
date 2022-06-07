class MinStack {
    int *data;
    int capacity;
    int nextIndex;
    int minElem;
    
    public:
    
    MinStack() {
        data = new int[4];
        capacity = 4;
        nextIndex = 0;
        minElem = 0;
    }
    
    void push(int val) {
        if (nextIndex == capacity) {
            int *newData = new int[2 * capacity];
            for (int i = 0; i < capacity; i++) {
                newData[i] = data[i];
            }
            capacity *= 2;
            delete[] data;
            data = newData;
        }
        data[nextIndex] = val;
        nextIndex++;
        if (!isEmpty()) {
            if (top() < minElem ) {
                minElem = top();
            }
        }
    }
    
    bool isEmpty() {
        return nextIndex == 0;
    }
    
    void pop() {
        nextIndex--;
    }
    
    int top() {
        return data[nextIndex - 1];
    }
    
    int getMin() {
        vector<int> v;
        while(!isEmpty()) {
            v.push_back(top());
            pop();
        }
        
        int ans = *min_element(v.begin(), v.end());
        reverse(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++) {
            push(v[i]);
        }
        
        return ans;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */