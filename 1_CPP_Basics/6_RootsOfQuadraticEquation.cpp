// Program to find Roots of Quadratic Equation
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Coefficents
    int a, b, c;
    // Roots of Quadratic Equation
    float root1, root2;

    // Example coefficents are: 4 8 4
    cout << "Enter 3 coefficients of quadratic equation(separated by space): ";
    cin >> a >> b >> c;

    root1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
    root2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);
    cout << "Roots of quadratic equation are:\n"
         << root1 << " " << root2 << endl;
    
    return 0;
}