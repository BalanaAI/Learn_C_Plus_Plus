/********************************************************************
*                  Constructors in Inheritance
* 
* When we create an object of Derived Class, first the Base Class
* Constructor is executed then the Derived Class Constructor is
* executed. That is, when we create an object of child class then the
* constructor of parent class will be executed first and then the
* constructor of child class is executed.
* Which constructor of parent class is executed? The answer is that
* always the default constructor of the parent class is executed.
* 
* What if my Derived class in C++ has default Constructor but my 
* Base class do not have default constructor? Does compiler create a
* default Base class constructor or not?
* No the compiler does not create a default constructor for the base
* class if you have defined any constructor in the base class 
* yourself. If the base class has no default constructor, then the 
* derived class must explicitly call one of the base class's 
* constructors in its initializer list. 
*********************************************************************/
#include <iostream>

using namespace std;

class Base {
    public:
        Base() {
            cout << "Default of Base" << endl;
        }

        Base(int x) {
            cout << "Parameterized of Base has " << x << endl;
        }
};


class Derived: public Base {
    public:
        Derived() {
            cout << "Default of Derived" << endl;
        }

        Derived(int a) {
            cout << "Parameterized of Derived has " << a << endl;
        }

        // Parameterized Constructor of Derived will call Base Constructor
        Derived(int x, int a): Base(x) {
            cout << "Parameterized of Derived has " << a << endl;
        }
};


int main() {
    Derived d1; // First Default Constructor of Base Class will be called
    cout << endl;
    
    Derived d2(10); // First Default Constructor of Base Class will be called
    cout << endl;

    // Parameterized of Derived will call Parameterized of Base Class
    Derived d3(20, 10);
    cout << endl;
    
    return 0;
}