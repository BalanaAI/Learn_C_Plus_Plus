/**************************************************************
*                   Pointer to an Object
* 
* C++ provides two ways to access object members using pointer:
* - Using Pointer Dereference Operator
*   When a pointer pointing to an object, then to access the
*   members of that object using dereference operator we'll use
*   the following syntax:
* 
*   (*ptr).object_member
* 
* - Using Arrow Operator (->)
*   C++ provides another operator to do this same job called
*   arrow operator (->). To access object members pointing by
*   the pointer, we'll use the following syntax:
*   
*   ptr -> object_member
*   
***************************************************************/
#include <iostream>

using namespace std;

// Define Rectangle Class
class Rectangle {
    // Make every class member as public, by default they are private
    public:
        // Calss Data Members 
        int length {0};
        int width {0};

        // Class Member Functions
        int area() {
            return length * width;
        }

        int perimeter() {
            return 2 * (length + width);
        }
};


int main() {
    // Create object of Rectangle Class
    Rectangle r1;       // This object will be created on the Stack
    r1.length = 10;
    r1.width = 5;

    // Create a pointer
    Rectangle *r_ptr1;

    // Assign the address of r1 Object to r_ptr1
    r_ptr1 = &r1;

    // Access the object members using Derefrence Operator
    cout << "Area of r1 = " << (*r_ptr1).area() << endl;
    cout << "Perimeter of r1 = " << (*r_ptr1).perimeter() << endl;
    cout << endl;

    // Create an Object of Rectangle Class on Heap
    Rectangle *r_ptr2 = new Rectangle();

    // Assign values to r_ptr2 Object Data Members using Arrow Operator (->)
    r_ptr2 -> length = 4;
    r_ptr2 -> width = 6;

    // Access Object Member Functions using Arrow Operator (->)
    cout << "Area of object pointed by r_ptr2 = " << r_ptr2->area() << endl;
    cout << "Perimeter of object pointed by r_ptr2 = " << r_ptr2->perimeter();
    cout << endl;

    return 0;
}