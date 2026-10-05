/*******************************************************************
*                       Template Functions
* 
* Think of a template as a blueprint that works with different data
* types, so you don't have to write the same code multiple times.
* 
* Template Class:
* A class that can store or process different data types using the
* same code. For example, one Box<T> class can create Box<int>, 
* Box<double>, or Box<string> objects.
********************************************************************/
#include <iostream>
#include <string>

using namespace std;

// Template Class
template <class T>
class Stack {
    private:
        T *stk;       // Pointer to an array for storing elements
        int top;
        int size;
    
    public:
        // Class Constructor
        Stack(int size) {
            this->size = size;
            stk = new T[size];
            top = -1;
        }

        // Display Stack Elements
        void display() {
            cout << "Stack Elements are: ";
            for(int i = 0; i <= top; i++)
                cout << stk[i] << " ";
            cout << endl;
        }

        void push(T x);
        T pop();

        // Class Destructor
        ~Stack() {
            delete [] stk;
        }
};

/*
For every class function when we are implementing outside
class, using scope resolution operator, we must use template.
*/
template <class T>
void Stack<T>::push(T x) {
    if(top == size - 1)
        cout << "Stack is Full!" << endl;
    else {
        top++;
        stk[top] = x;
    }
}

template <class T>
T Stack<T>::pop() {
    T temp {};
    if(top == -1)
        cout << "Stack is empty!" << endl;
    else {
        temp = stk[top];
        top--;
    }
    return temp;
}

int main() {
    // Instantiate the Stack Class for Integers
    Stack<int> s1(10);
    s1.push(13);
    s1.push(27);
    s1.push(33);
    s1.display();

    // Instantiate the Stack Class for Double
    Stack <double> s2(5);
    s2.push(7.5);
    s2.push(3.25);
    s2.display();

    // Instantiate the Stack Class for Strings
    Stack <string> s3(5);
    s3.push("Hello,");
    s3.push("C++");
    s3.display();

    return 0;
}