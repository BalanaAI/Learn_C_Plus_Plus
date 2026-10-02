/***************************************************************
*                     Inheritance in C++
* 
* Inheritance in C++ is a feature that allows a new class 
* (derived class) to reuse the data and functions of an existing
* class (base class). Think of it like a child inheriting traits
* from a parent—the child gets the parent's features but can 
* also add new ones or change existing behavior.
****************************************************************/
#include<iostream>

using namespace std;


class Base {
    public:
        int b;
        void display() {
            cout << "Display of Base" << endl;
        } 
};


class Derived: public Base {
    public:
        void show() {
            cout << "Show of Derived" << endl;
        } 
};

int main() {
    // Create an object of Derived Class
    Derived d1;

    /* Derived Class Object has access to public elements of Base Class
       as well as its own Derived Class */
    d1.b = 75;
    d1.display();
    d1.show();
    cout << "b = " << d1.b << endl;

    return 0;
}