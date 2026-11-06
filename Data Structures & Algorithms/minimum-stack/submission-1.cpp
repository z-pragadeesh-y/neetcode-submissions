class MinStack {
    stack<int> t;
    stack<int>mint;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        t.push(val);
    
        if (mint.empty() || val < mint.top()){
            mint.push(val);
        }
        else {
    mint.push(mint.top()); // Keep mint synced with t's size!
}
    }
    
    void pop() {
        t.pop();
        mint.pop();
    }
    
    int top() {
        return t.top();
    }
    
    int getMin() {
        return mint.top();
    }
};
