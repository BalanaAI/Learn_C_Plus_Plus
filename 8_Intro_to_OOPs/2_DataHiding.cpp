/****************************************************************
*          Data Hiding using Accessors and Mutators
* 
* In C++ we keep Data Members of class as private and Member
* Functions as public, and this facilitate Data Hiding of OOPs.
* 
* - Mutators:
*   Member functions that are used to set the class data members 
*   are called Mutators.
* 
* - Accessors:
*   Member functions that are used to access the class data
*   members are called Accessors.
*****************************************************************/
#include <iostream>

using namespace std;

// Define Rectangle Class
class Rectangle {
    private:
        // Calss Data Members (Private) also called Properties
        int length;
        int width;
    
    public:
        // Class Accessors (Public)
        int getLength() {
            return length;
        }

        int getWidth() {
            return width;
        }

        // Class Mutators (Public)
        void setLength(int l) {
            // Perform validation check
            if(l >= 0)
                length = l;
            else
                length = 0;
        }

        void setWidth(int w) {
            // Perform validation check
            if(w >= 0)
                width = w;
            else
                width = 0;
        }

        // Class Member Functions (Public)
        int area() {
            return length * width;
        }

        int perimeter() {
            return 2 * (length + width);
        }
};


int main() {
    Rectangle r1;
    
    // r1 Data Members can only be assigned values using Mutators
    r1.setLength(6);
    r1.setWidth(4);

    // r1 Data Members can only be accessed through Accessors
    cout << "r1 length = " << r1.getLength() << endl;
    cout << "r1 width = " << r1.getWidth() << endl;
    cout << endl;

    // r1 Area and Perimeter using Public Member Functions
    cout << "r1 Area = " << r1.area() << endl;
    cout << "r1 Perimeter = " << r1.perimeter() << endl;

    return 0;
}