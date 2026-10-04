/*******************************************************************
*                       Abstract Class
* 
* When a zero is assigned to the prototype of virtual function in
* Base class then it means that the implementation of that function
* is compulsory in the Derived classes, and it is called pure
* virtual function.
* When a class has just pure virtual functions, or pure virtual
* functions along with concrete functions then it is called an 
* abstract class.
* When a class has just pure virtual functions then it is also
* called an interface.
* Abstract class can not be instantiated to create objects but it
* can have pointers to achieve Polymorphism.
********************************************************************/
#include<iostream>

using namespace std;

// Abstract Class for Cars
class Car {
    public:
        // Pure Virtual Functions
        virtual void start() = 0;
        virtual void stop() = 0;
};


// Specialized Swift Car
class Swift : public Car {
    public:
        void start() {
            cout << "Swift Started" << endl;
        }

        void stop() {
            cout << "Swift Stopped" << endl;
        }
};


// Specialized Corolla Car
class Corolla : public Car {
    public:
        void start() {
            cout << "Corolla Started" << endl;
        }

        void stop() {
            cout << "Corolla Stopped" << endl;
        }
};


int main() {
    // Car is Abstract Class and can not be instantiated
    // Car c1;  // Generate a Compiler Error

    // A Pointer to Abstract Class Car can be created
    Car *ptr_car;

    // Assign Swift Object to ptr_car Pointer
    ptr_car = new Swift();
    ptr_car->start();   // Swift started
    ptr_car->stop();    // Swift stopped
    cout << endl;
    
    // Assign Corolla Object to ptr_car Pointer
    ptr_car = new Corolla();
    ptr_car->start();   // Corolla started
    ptr_car->stop();    // Corolla stopped

    return 0;
}

