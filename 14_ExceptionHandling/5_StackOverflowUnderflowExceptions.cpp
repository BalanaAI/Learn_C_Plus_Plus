/**********************************************************************
*           Stack Overflow & Underflow Exception Handling
* 
* Write a C++ program that can handle:
    - StackOverflow Exception
    - StackUnderflow Exception
***********************************************************************/
#include <iostream>

using namespace std;

class StackOverflow {
    // Implementation of StackOverflow Class
};


class StackUnderflow {
    // Implementation of StackUnderflow Class
};


class Stack {
    private:
        int *stk;
        int top = -1;
        int size;
    
    public:
        // Class Constructor
        Stack(int size) {
            this->size = size;
            stk = new int[size];
        }

        // Stack Push Operation
        void push(int x) {
            if(top == size - 1)
                throw StackOverflow();
            top++;
            stk[top] = x;
        }
        
        // Stack Pop Operation
        int pop() {
            if(top == -1)
                throw StackUnderflow();
            return stk[top--];
        }
};

int main() {
    // Create a Stack Object
    Stack s(5);

    try {
        // s.pop();
        s.push(2);
        s.push(3);
        s.push(4);
        s.push(10);
        s.push(8);
        s.push(9);
    }
    catch(StackOverflow e) {
        cout << "Stack is Full!" << endl;
    }
    catch(StackUnderflow e) {
        cout << "Stack is already Empty!" << endl;
    }

    return 0;
}