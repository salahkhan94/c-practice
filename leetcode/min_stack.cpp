#include <bits/stdc++.h>

using namespace std;

class MinStack {
private:
    stack<int> gen_stack;
    stack<int> min_stack;
public:
    MinStack() {
    }
    
    void push(int val) {
        gen_stack.push(val);
        if (min_stack.empty()) {
            min_stack.push(val);
        }
        else {
            int new_min = min(min_stack.top(), val);
            min_stack.push(new_min);
        }

    }
    
    void pop() {
        gen_stack.pop();
        min_stack.pop();
    }
    
    int top() {
        return gen_stack.top();
    }
    
    int getMin() {
        return min_stack.top();
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