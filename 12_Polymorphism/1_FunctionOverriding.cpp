/******************************************************************
*                       Function Overriding
* 
* Function overriding is when a derived class provides its own 
* version of a function that already exists in the base class. When
* that function is called on a derived object, the derived class's
* version runs instead of the base class's version, allowing the 
* object to have its own specialized behavior.
* 
* Also note that function overriding means the prototype of a 
* function must be the same in both Base and Derived classes.
*******************************************************************/
#include<iostream>

using namespace std;

class Base {
    public:
        void display() {
            cout << "Display of Base" << endl;
        }

        void show() {
            cout << "Show of Base" << endl;
        }
};


class Derived : public Base {
    public:
        void show() {
            cout << "Show of Derived" << endl;
        }
};

int main() {
    // Create an Object of Derived Class
    Derived d1;
    d1.display();   // display() of Base Class will be executed
    // show() of Derived overriden show() of Base
    d1.show();      // show() of Derived Class will be executed
    
    // To call show() of Base Class explicitly,
    // specify it using scope resolution operator
    d1.Base::show();
    
    return 0;
}
