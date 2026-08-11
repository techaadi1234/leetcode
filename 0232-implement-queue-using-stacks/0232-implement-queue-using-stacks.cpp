class MyQueue {
    private:
    stack<int>sm;
    stack<int>sh;
    void tf(){
         if(sh.empty()){
            while(!sm.empty()){
                sh.push(sm.top());
                sm.pop();
            }
        } 
    }

public:
    MyQueue() {
        
    }
    void push(int x){
        sm.push(x);
    }
    int pop() {
       tf();
      int te=sh.top();
      sh.pop();
      return te;
    }
    
 
    
    int peek() {
        tf();
        return sh.top();
    }
    
    bool empty() {
                if(sm.empty() && sh.empty())return true;
                else return false;
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