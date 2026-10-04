/******************************************************************
*                           Polymorphism
* 
* The purpose of virtual functions is Polymorphism. A virtual 
* function allows the same function call to behave differently 
* depending on the actual object being used. This is called 
* polymorphism — one interface, many different behaviors.
* Think of it like pressing the same Play button on different music
* apps: the button is the same, but each app plays music in its own
* way.
*******************************************************************/
#include<iostream>

using namespace std;

// Generalized Base Class for Cars
class Car {
    public:
        virtual void start() {
            cout << "Car Started" << endl;
        }

        virtual void stop() {
            cout << "Car Stopped" << endl;
        }
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
    // Create a Pointer to Car Object
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
