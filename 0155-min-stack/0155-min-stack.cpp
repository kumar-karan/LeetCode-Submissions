class MinStack {
public:
    stack<int> min;
    stack<int> st;
    MinStack() {
        
    }
    
    void push(int val) 
    {
        st.push(val);
        if(min.empty() || val<=min.top())
            min.push(val);
    }
    
    void pop() 
    {
        if(st.top() == min.top()) min.pop();
        st.pop();
    }
    
    int top() 
    {
        return st.top();
    }
    
    int getMin() 
    {
        return min.top();
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