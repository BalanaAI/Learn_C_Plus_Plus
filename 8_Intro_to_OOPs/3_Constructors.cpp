/******************************************************************
*                       C++ Constructors
* 
* In C++, when we create a class and don't provide any constructor
* then at the time of Object instantiation the Default Constructor
* provided by the C++ compiler is executed. This Constructor do 
* no initialization work, except creating a class object.
* 
* C++ allows us to override the Default compiler provided 
* Constructor with our own Constructor. We can do this in several
* ways:
*   - No Arguments Constructor
*   - Parameterized Constructor
    - Copy Constructor
*******************************************************************/
#include <iostream>

using namespace std;

// Define Rectangle Class
class Rectangle {
    private:
        // Calss Data Members (Private) also called Properties
        int length;
        int width;
    
    public:
        // No Argument Class Constructor
        Rectangle() {   // Constructor have same class name & no retrun type
            length = 1;
            width = 1;
        }

        // Parameterized Constructor
        Rectangle(int l, int w) {
            // Validate & set length and width using Mutators
            setLength(l);
            setWidth(w);
        }

        // Copy Constructor that takes a refrence to another Rectangle Object
        Rectangle(Rectangle &rect) {
            length = rect.length;
            width = rect.width;
        }

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
                length = 1;
        }

        void setWidth(int w) {
            // Perform validation check
            if(w >= 0)
                width = w;
            else
                width = 1;
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
    Rectangle r1;   // No Arguments Constructor will be called

    // r1 Area and Perimeter using Public Member Functions
    cout << "r1 Area = " << r1.area() << endl;              // Area = 1
    cout << "r1 Perimeter = " << r1.perimeter() << endl;    // Perimeter = 4
    cout << endl;

    Rectangle r2(6,4);   // Parameterized Constructor will be called

    // r2 Area and Perimeter using Public Member Functions
    cout << "r2 Area = " << r2.area() << endl;              // Area = 24
    cout << "r2 Perimeter = " << r2.perimeter() << endl;    // Perimeter = 20
    cout << endl;
    
    Rectangle r3(r2);   // Copy Constructor will be called

    // r3 will have the same Area and Perimeter as r2
    cout << "r3 Area = " << r3.area() << endl;              // Area = 24
    cout << "r3 Perimeter = " << r3.perimeter() << endl;    // Perimeter = 20
    
    return 0;
}