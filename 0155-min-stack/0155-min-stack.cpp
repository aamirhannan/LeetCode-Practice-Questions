class MinStack {
public:
    MinStack() {
        
    }
    
    stack<int> st,ans;
    
    void push(int val) {
        st.push(val);
        if(ans.empty())
        {
            ans.push(val);
        }
        else
        {
           ans.push(min(val,ans.top()));
        }
    }
    
    void pop() {
        st.pop();
        ans.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return ans.top();
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