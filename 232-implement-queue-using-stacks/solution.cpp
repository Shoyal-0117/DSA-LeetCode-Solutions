// 0 ms | 10.1 MB
class MyQueue {
    stack<int> st;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        stack<int> temp;
        while(!st.empty()){
            int val = st.top();
            st.pop();
            temp.push(val);
        }
        st.push(x);
        while(!temp.empty()){
            int val = temp.top();
            temp.pop();
            st.push(val);
        }
    }
    
    int pop() {
        int val = st.top();
        st.pop();
        return val;
    }
    
    int peek() {
        return st.top();
    }
    
    bool empty() {
        return st.empty();
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