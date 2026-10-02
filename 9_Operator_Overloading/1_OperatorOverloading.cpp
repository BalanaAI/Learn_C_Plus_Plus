/********************************************************************
*                    Operator Overloading
* 
* Operator overloading in C++ is the feature that allows you to give 
* existing operators (such as +, -, or ==) a custom meaning for 
* user-defined objects like classes. It makes objects behave more 
* naturally, so expressions like obj1 + obj2 work in a way that 
* matches the purpose of your class.
*********************************************************************/
#include <iostream>

using namespace std;

// Complex Number Class
class Complex {
    // Private Data Members
    private:
        int real;
        int imag;
    
    public:
        // Default Arguments Constructor
        Complex(int real=0, int imag=0) {
            this->real = real;
            this->imag = imag;
        }

        int getReal() {
            return real;
        }

        int getImag() {
            return imag;
        }
        /* Called on one Complex number, take another Complex number
           as argument, add them and returns the result as another 
           Complex number*/
        Complex add(Complex x) {
            Complex temp;
            temp.real = this->real + x.real;
            temp.imag = this->imag + x.imag;
            return temp;
        }

        // Using + operator to overload for Complex Class Objects
        Complex operator +(Complex x) {
            Complex temp;
            temp.real = this->real + x.real;
            temp.imag = this->imag + x.imag;
            return temp;
        }
};


int main() {
    // Create 3 Complex Class Objects
    Complex c1(5,3), c2(10,5), c3, c4, c5;

    c3 = c1.add(c2);
    cout << "c3 = " << c3.getReal() << " + i" << c3.getImag() << endl;

    c4 = c1 + c2;   // This is same as c1.add(c2)
    cout << "c4 = " << c4.getReal() << " + i" << c4.getImag() << endl;

    c5 = c2 + c1;   // This is same as c2.add(c1)
    cout << "c5 = " << c5.getReal() << " + i" << c5.getImag() << endl;

    return 0;
}