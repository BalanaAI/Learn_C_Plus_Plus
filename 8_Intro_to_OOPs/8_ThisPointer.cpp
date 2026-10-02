/******************************************************************
*                       C++ this Pointer
* 
* The "this" pointer in C++ is a special pointer that automatically 
* points to the current object whose member function is being 
* called. It lets you access the current object's data members and
* is especially useful when a parameter has the same name as a data
* member or when you want to return the current object (*this).
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
        // Class Constructors
        Rectangle();
        Rectangle(int length, int width);
        Rectangle(Rectangle &r);
        
        // Class Accessors
        int getLength();
        int getWidth();

        // Class Mutators
        void setLength(int length);
        void setWidth(int width);

        // Class Facilitator
        int area();
        int perimeter();

        // Class Inspector/Enquiry
        bool isSquare();

        // Class Destructor
        ~Rectangle();
};


int main() {
    // Create an Object of Rectangle Class
    Rectangle r1(10, 10);

    cout << "Area of r1 = " << r1.area() << endl;
    if(r1.isSquare())
        cout << "r1 is Square" << endl;
       
    return 0;
}


// No Argument Constructor
Rectangle::Rectangle() {
    this->length = 1;
    this->width = 1;
}

// Parameterized Constructor
Rectangle::Rectangle(int length, int width) {
    // Validate & set length and width using Mutators
    setLength(length);
    setWidth(width);
}

// Copy Constructor that takes a refrence to another Rectangle Object
Rectangle::Rectangle(Rectangle &r) {
    this->length = r.length;
    this->width = r.width;
}

// Class Accessors
int Rectangle::getLength() {
    return length;
}

int Rectangle::getWidth() {
    return width;
}

// Class Mutators
void Rectangle::setLength(int length) {
    // Perform validation check
    if(length >= 0)
        this->length = length;
    else
        this->length = 1;
}

void Rectangle::setWidth(int width) {
    // Perform validation check
    if(width >= 0)
        this->width = width;
    else
        this->width = 1;
}

// Class Facilitator
int Rectangle::area() {
    return length * width;
}

int Rectangle::perimeter() {
     return 2 * (length + width);
}

// Class Inspector/Enquiry
bool Rectangle::isSquare() {
    return length == width;
}

// Class Destructor
Rectangle::~Rectangle() {
    cout << "Rectangle Destroyed" << endl;
}