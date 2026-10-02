/*********************************************************************
*                C++ Default Arguments Constructor
* 
* In C++, we can use Default Arguments Constructor to avoid writing
* multiple constructors, like No Arguments Constructor & Parameterized
* Constructors.
* Remember that when we write Default Arguments Constructor then 
* including No Arguments Constructor in Class definition will create
* ambiguity and our program won't compile.
**********************************************************************/

#include <iostream>

using namespace std;

// Define Rectangle Class
class Rectangle {
    private:
        // Calss Data Members (Private) also called Properties
        int length;
        int width;
    
    public:
        // Default Arguments Constructor
        Rectangle(int l=1, int w=1) {
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
    Rectangle r1;   // Default Arguments Constructor will be called

    // r1 Area and Perimeter using Public Member Functions
    cout << "r1 Area = " << r1.area() << endl;              // Area = 1
    cout << "r1 Perimeter = " << r1.perimeter() << endl;    // Perimeter = 4
    cout << endl;

    Rectangle r2(6,4);   // Default Arguments Constructor will be called

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