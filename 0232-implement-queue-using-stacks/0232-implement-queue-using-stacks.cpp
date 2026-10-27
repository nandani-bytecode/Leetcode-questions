#include <stack>
using namespace std;

class MyQueue {
private:
    stack<int> st1, st2; 

public:
    MyQueue() {}

   
    void push(int x) {
        st1.push(x);
    }

   
    int pop() {
        if (st2.empty()) {
           
            while (!st1.empty()) {
                st2.push(st1.top());
                st1.pop();
            }
        }
        int front = st2.top();
        st2.pop();
        return front;
    }

    int peek() {
        if (st2.empty()) {
            while (!st1.empty()) {
                st2.push(st1.top());
                st1.pop();
            }
        }
        return st2.top();
    }

   
    bool empty() {
        return st1.empty() && st2.empty();
    }
};
