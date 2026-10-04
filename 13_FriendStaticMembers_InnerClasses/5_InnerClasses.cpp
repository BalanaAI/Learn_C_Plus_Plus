/***************************************************************
*                       Inner Classes
*
* An inner class in C++ is a class declared inside another class,
* showing that it is closely related to the outer class.
*
* We use it when a helper type is meaningful only within the 
* context of the outer class and does not need to exist 
* independently.
****************************************************************/
#include <iostream>

using namespace std;

class Outer {
    public:
        void outer_func() {
            // Outer class can use the Objects of Inner Class
            i.display();
        }

        class Inner {
            public:
                void display() {
                    cout << "Display of Inner" << endl;
                }
        };
    
    // After Definition of Inner I can Instantiate Inner Class
    Inner i;
};


int main() {
    /* We can also use Inner Class outside the Container Class,
    if it is public */
    Outer::Inner i;
    i.display();
    
    return 0;
}