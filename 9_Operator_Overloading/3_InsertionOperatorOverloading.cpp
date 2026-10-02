/*********************************************************************
*      Insertion (<<) Operator Overloading using Friend Function
* 
* This program overloads the insertion (<<) operator as a friend 
* function. The friend function provides direct access to private data
* members, allowing objects to be displayed in a user-friendly format
* using cout.
**********************************************************************/
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
       
        // Friend Function prototype for Overloading Insertion Operator <<
        friend ostream & operator << (ostream &out, Complex &c);
};

// Using Friend Function to Overload Insertion Operator <<
ostream & operator << (ostream &out, Complex &c) {
    out << c.real << " + i" << c.imag;
    return out;
}

int main() {
    // Create 3 Complex Class Objects
    Complex c1(5,3), c2(10,5);

    // Display the Complex Class Objects using Overloaded Insertion Operator
    cout << c1 << endl;
    cout << c2 << endl;
    cout << endl;

    // Display the Complex Class Objects calling Friend Function
    operator <<(cout, c1) << endl;
    operator <<(cout, c2) << endl;

    return 0;
}
