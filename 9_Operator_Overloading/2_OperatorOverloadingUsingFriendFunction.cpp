/********************************************************************
*             Operator Overloading using Friend Function
* 
* A friend function is a normal function that lives outside the class,
* but the class gives it special permission (using the `friend` 
* keyword) to access its private and protected data. We declare it 
* inside the class only to grant this permission, but we define it 
* outside like any other normal function. It is commonly used in 
* operator overloading when the operator needs to access private data
* of one or more objects.
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
        
        // Friend Function prototype for Overloading + Operator
        friend Complex operator + (Complex c1, Complex c2);
};

// Using Friend Function to Overload + Operator
Complex operator + (Complex c1, Complex c2) {
    Complex temp;
    /* Since it is declared as Friend of Complex Class, it
    can access the private data members of the Complex
    class objects */
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    // Create 3 Complex Class Objects
    Complex c1(5,3), c2(10,5), c3;

    // This will go to friend function for addition of c1 & c2
    c3 = c1 + c2;   // Equivalent to c3 = operator +(c1, c2);
    cout << "c3 = " << c3.getReal() << " + i" << c3.getImag() << endl;

    return 0;
}
