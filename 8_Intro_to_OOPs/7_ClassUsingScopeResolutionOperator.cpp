/******************************************************************
*          Writing a Class using Scope Resolution Operator
* 
* C++ Scope Resolution Operator (::) allows us to define class
* member functions outside the class. That is, the scope resolution
* operator is used to avoid class member functions as inline
* functions. We provide the prototypes of member functions inside
* the class and define the member functions outside the class using
* scope resolution operator.
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
        Rectangle(int l, int w);
        Rectangle(Rectangle &r);
        
        // Class Accessors
        int getLength();
        int getWidth();

        // Class Mutators
        void setLength(int l);
        void setWidth(int w);

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
    length = 1;
    width = 1;
}

// Parameterized Constructor
Rectangle::Rectangle(int l, int w) {
    // Validate & set length and width using Mutators
    setLength(l);
    setWidth(w);
}

// Copy Constructor that takes a refrence to another Rectangle Object
Rectangle::Rectangle(Rectangle &r) {
    length = r.length;
    width = r.width;
}

// Class Accessors
int Rectangle::getLength() {
    return length;
}

int Rectangle::getWidth() {
    return width;
}

// Class Mutators
void Rectangle::setLength(int l) {
    // Perform validation check
    if(l >= 0)
        length = l;
    else
        length = 1;
}

void Rectangle::setWidth(int w) {
    // Perform validation check
    if(w >= 0)
        width = w;
    else
        width = 1;
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