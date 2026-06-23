class MinStack {
    stack<int>value;
    stack<int>mins;
public:
    MinStack() {}
    void push(int val) {
        value.push(val);
        if(mins.empty()) mins.push(val);
        else mins.push(min(mins.top(),val));
    }
    
    void pop() {
        value.pop();
        mins.pop();
    }
    
    int top() {
        return value.top();
    }
    
    int getMin() {
        return mins.top();
    }
};
