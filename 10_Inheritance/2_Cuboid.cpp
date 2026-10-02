/***************************************************************
*      Inheritance of Cubaid Class from Rectangle Class
* 
* This program demonstrates inheritance in C++ by deriving the 
* Cuboid class from the Rectangle class. The Cuboid class reuses
* the Rectangle's properties and adds functionality to calculate
* the volume of a cuboid.
****************************************************************/
#include<iostream>

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


// Define Cuboid Class that Publicly Inherits from Rectangle Class
class Cuboid: public Rectangle {
    // Add one data member for height of Cuboid
    private:
        int height;
    
    public:
        Cuboid(int h) {
            this->height = h;
        }

        // Cuboid Class Accessor
        int getHeight() {
            return height;
        }

        // Cuboid Class Mutator
        void setHeight(int h) {
            this->height = h;
        }

        // Cuboid Class Facilitator
        int volume() {
            // Attributes length & width are private, and directly accessible
            return getLength() * getWidth() * height;
        }
};


int main() {
    // Create an Object of Cuboid Class
    Cuboid c1(5);   // length & width will be initialized to 1 & 1
    Cuboid c2(3);
    c2.setLength(7);
    c2.setWidth(4);

    cout << "Volume of c1 = " << c1.volume() << endl;   // 5
    cout << "Volume of c2 = " << c2.volume() << endl;   // 84
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