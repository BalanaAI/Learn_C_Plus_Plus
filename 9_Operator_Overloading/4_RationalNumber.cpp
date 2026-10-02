/*******************************************************************
*     + and << Operator Overloading for Rational Numbers
* 
* Write a program to create a class for Rational Numbers (p/q) that 
* overload the + and << operators for the objects of that class.
********************************************************************/
#include<iostream>

using namespace std;

class Rational {
    // Class Data Members
    private:
        int p;
        int q;
    
    // Class Member Functions
    public:
        // Default Arguments Constructor
        Rational(int p=1, int q=1) {
            this->p = p;
            this->q = q;
        }

        // Copy Constructor
        Rational(Rational &r) {
            this->p = r.p;
            this->q = r.q;
        }

        // Class Accessors
        int getP() { return p; }
        int getQ() { return q; }

        // Class Mutators
        void setP(int p) {
            this->p = p;
        }
        void setQ(int q) {
            this->q = q;
        }

        // + Operator Overloading
        Rational operator +(Rational r) {
            Rational temp;
            temp.p = this->p*r.q + this->q*r.p;
            temp.q = this->q * r.q;
            return temp;
        }

        // Insertion Operator << Overloading using Friend Function
        friend ostream & operator << (ostream &out, Rational &r);
};

ostream & operator << (ostream &out, Rational &r) {
    out << r.p << "/" << r.q;
    return out;
}

int main() {
    Rational r1(3,4), r2(2,5), r3;

    r3 = r1 + r2;
    cout << "Sum of " << r1 << " and " << r2 << " is " << r3;

    return 0;
}