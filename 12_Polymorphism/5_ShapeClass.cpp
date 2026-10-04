/*******************************************************************
*                          Shape Class
* 
* Write Classes to demonstrate Polymorphism.
* - Abstract Base Class called Shape
* - Derived Classes of Rectangle and Circle
********************************************************************/
#include<iostream>

using namespace std;

class Shape {
    public:
        virtual float area() = 0;
        virtual float perimeter() = 0;
};


class Rectangle : public Shape {
    private:
        float length;
        float width;
    public:
        // Parameteried Constructor
        Rectangle(float length=1.0, float width=1.0) 
            : length{length}, width{width} {
            }
        
        float perimeter() {
            return 2 * (length + width);
        }

        float area() {
            return length * width;
        }
};


class Circle : public Shape {
    private:
        float radius;
    public:
        Circle(float radius=1.0)
            : radius{radius} {
            }
        
        float perimeter() {
            return 2 * 3.1425 * radius;
        }

        float area() {
            return 3.1425 * radius * radius;
        }
};


int main() {
    Shape *s = new Rectangle(10,5);

    cout << "Area of Rectangle = " << s->area() << endl;
    cout << "Perimeter of Rectangle = " << s->perimeter() << endl;
    cout << endl;

    s = new Circle(10);
    cout << "Area of Circle = " << s->area() << endl;
    cout << "Perimeter of Circle = " << s->perimeter() << endl;
    return 0;
}