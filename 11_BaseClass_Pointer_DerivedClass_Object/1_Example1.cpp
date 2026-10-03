/******************************************************************
*           Base Class Pointer to Derived Class Object
* 
* A derived class is a more specific version of the base class, so 
* it naturally contains everything the base class has.
* A base class pointer only expects the base class part, so it can
* safely point to a derived object.
* A base class object, however, does not contain the extra features
* of a derived class.
* So allowing a derived class pointer to point to a base object 
* would make it expect data or functions that don't exist.
* 
* Think of it as calling every car a vehicle, but you cannot call 
* every vehicle a car because some vehicles are buses, bikes, or 
* trucks.
*******************************************************************/
#include<iostream>

using namespace std;

class Base {
    public:
        void func1() {
            cout << "func1 of Base" << endl;
        }
};


class Derived : public Base {
    public:
        void func2() {
            cout << "func2 of Derived" << endl;
        }
};


int main() {
    // Derived Class Object will have both func1() & func2()
    Derived d1;
    d1.func1();
    d1.func2();
    cout << endl;

    Base *ptr_base;
    // Base Class Pointer is assigned address of Derived Class Object
    ptr_base = &d1;
    
    // Base Class pointer can only access members of Base Class
    ptr_base->func1();
    // ptr_base->func2();   // Derived Class members are inaccessible

    // Derived Class Pointer to Base Class Object is not allowed
    Base b1;
    Derived *ptr_derived;
    
    // Derived Class Pointer cannot be assigned Base Class Object
    // ptr_derived = &b1;  // Compiler Error

    return 0;
}