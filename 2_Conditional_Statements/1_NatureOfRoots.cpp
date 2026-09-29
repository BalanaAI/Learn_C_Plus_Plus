/*
*               Find Nature of Roots
*
* Quadratic Equation ax^2 + bx + c = 0 has Roots,
* x = (-b ± sqrt(b^2 - 4ac)) / (2a)
* 
* The Discriminant,
* d = b^2 - 4ac
* has possible values of:
* - if d = 0, real and equal
* - if d > 0, real and unequal
* - if d < 0, imaginary
* 
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, c, d, root1, root2;

    cout << "Enter coefficients of quadratic equation (separated by space): ";
    cin >> a >> b >> c;

    d = b*b - 4 * a * c;
    if(d == 0) {
        cout << "Roots are real and equal" << endl;
        cout << -b / 2 * a << endl;
    }
    else if(d > 0) {
        cout << "Roots are real and unequal" << endl;
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        cout << root1 << endl;
        cout << root2 << endl;
    }
    else {
        cout << "Roots are imaginary" << endl;
    }
    return 0;
}