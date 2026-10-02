/**********************************************************************
*                        Access Specifiers
* 
* - private:
*           Class members declared as private can be accessible only
*   inside that class.
*
* - protected:
*             Class members declared as protected can be accessed only
*   inside the class itself as well inside its derived class.
*
* - public:
*          Class members declared as public can be accessed everywhere,
* that is, inside the class, inside the derived class, and using the
* object of that class.
***********************************************************************/
#include <iostream>

using namespace std;

class Rectangle {
    private:
        int length;
        int width;
    
    public:
        int getLength() { return length; }

        int getWidth() { return width; }

        void setLength(int length) {
            if(length > 0)
                this->length = length;
            else
                this->length = 1;
        }

        void setWidth(int width) {
            if(width > 0)
                this->width = width;
            else
                this->width = 1;
        } 

        int area() {
            return length * width;
        }

        int perimeter() {
            return 2 * (length + width);
        }
};

int main() {
    Rectangle r1;

    // I can't access "private" members on Class Object
    // r1.length = 4;
    // r1.width = 6;

    // I can access "public" members on Class Object
    r1.setLength(6);
    r1.setWidth(4);
    cout << "Area of r1 = " << r1.area() << endl;
    cout << "Perimeter of r1 = " << r1.perimeter() << endl;

    return 0;
}