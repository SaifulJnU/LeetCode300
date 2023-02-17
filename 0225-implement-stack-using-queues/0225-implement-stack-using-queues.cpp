class MyStack {
public:
    
    queue<int>q;
    
    MyStack() { 
        
    }   
    
    void push(int x) {
        
      int s = q.size();
      q.push(x);
        
      for(int i=0; i<s; i++)
        {
            int y = q. front();
           // q.push(q.front());
            q.pop();
            q.push(y);
        }
    }
    
    int pop() {
          
           int temp = q.front();
           q.pop();
           return temp;
    }
    
    int top() {
        
       return q.front();
    }
    

    bool empty() {
        
        return q.empty();
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