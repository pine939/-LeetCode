class MyQueue {
public:
    stack<int> s;
    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        stack<int> tmps;
        int n = s.size();
        while(n--) {
            tmps.push(s.top());
            s.pop();
        }
        int top = tmps.top();
        tmps.pop();
        n = tmps.size();
        while (n--) {
            s.push(tmps.top());
            tmps.pop();
        }
        return top;
    }
    
    int peek() {
        stack<int> s2(s);
        stack<int> tmps;
        int n = s2.size();
        while(n--) {
            tmps.push(s2.top());
            s2.pop();
        }
        return tmps.top();
    }
    
    bool empty() {
        return s.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */