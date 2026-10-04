/******************************************************************
*             Virtual Function in Function Overriding
* 
* A virtual function tells C++ to wait until the program is running
* before deciding which version of a function to call. If a base 
* class pointer points to a derived class object, C++ checks the 
* actual object and runs the derived class's overridden function 
* instead of the base class's version. Without virtual, C++ only 
* looks at the pointer's type and ignores the object's actual type.
* Think of virtual as saying, "Don't judge by the pointer—look at 
* the real object."
*******************************************************************/
#include<iostream>

using namespace std;

class Base {
    public:
        // func1() is not Virtual Function
        void func1() {
            cout << "func1 of Base" << endl;
        }

        // func2() is a Virtual Function
        virtual void func2() {
            cout << "func2 of Base" << endl;
        }
};


class Derived : public Base {
    public:
        void func1() {
            cout << "func1 of Derived" << endl;
        }

        void func2() {
            cout << "func2 of Derived" << endl;
        }
};

int main() {
    // Create an Object of Derived Class
    Derived d1;
    // Overriden func1() is called
    d1.func1();     // func1() of Derived Class will be executed
    cout << endl;

    // Base Class Pointer pointing to Derived Class Object d1
    Base *ptr_base {&d1};

    // In case of simple override, Base Class function will be called.
    // That is, a function is called based on Pointer not on Object Type
    ptr_base->func1();  // func1() of Base Class will be executed

    // In case of virtual function, Derived Class function will be called.
    // That is, a function is called based on Object Type not on Pointer
    ptr_base->func2();

    return 0;
}
