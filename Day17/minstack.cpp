class MinStack {
    stack<long long>st;
    long long min=-1;
public:
    MinStack() {
        // constructor -> no use of ours 
    }
    void push(int value) {
        if(st.size()==0){
            st.push(value);
            min=value;
        }
        else if(value>=min){
            st.push(value);
        }  
        else{
            st.push(2LL*value-min);// negative vaali values pr bhi chalane ke liye 
            min=value;}}
    
    void pop() {
        if(st.size()==0){
            return;
        }
        else if(st.top()>=min){
            st.pop();}
        else{
            int oldmin=2*min-st.top();
            min=oldmin;
            st.pop();}}
    
    int top() {
        if(st.size()==0){
            return -1;
        }
        else if(st.top()>=min){
            return st.top();
        }
        else{
            return min;
        }
        return 0;
    }
    
    int getMin() {
        if(st.size()==0){
            return -1;
        }
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */