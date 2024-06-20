class MyStack {
    queue<int> queue;
public:
    MyStack() {
        
    }
    
    void push(int x) 
    {
        int size = queue.size();
        queue.push(x);
        for (int i = 0; i < size; ++i) 
        {
            queue.push(queue.front());
            queue.pop();
        }
    }
    
    int pop() 
    {
        int topElement = queue.front();
        queue.pop();
        return topElement;
    }
    
    int top() 
    {
        return queue.front();   
    }
    
    bool empty() 
    {
        return queue.empty();    
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