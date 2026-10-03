/******************************************************************
*           Base Class Pointer to Derived Class Object        
* 
* In this example we have Base Class of Rectange and Derived Class
* of Cuboid.
*******************************************************************/
#include<iostream>

using namespace std;

// Base Class
class Rectangle {
    public:
        void area() {
            cout << "Area of Rectangle Executed" << endl;
        }
};


class Cuboid : public Rectangle {
    public:
        void volume() {
            cout << "Cuboid Volume executed" << endl;
        }
};


int main() {
    // Cuboid Object has two member functions
    Cuboid c1;
    c1.area();
    c1.volume();
    cout << endl;

    Rectangle *ptr_rect;
    ptr_rect = &c1;     // Cuboid Object can be assigned to Rectangle Pointer
    
    // Now Rectangle Pointer will have access only to members of Rectangle
    ptr_rect->area();
    // Following statement will generate compiler error
    // ptr_rect->volume();
    return 0;
}