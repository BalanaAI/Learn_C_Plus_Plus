/*******************************************************************
*                       Template Functions
* 
* Think of a template as a blueprint that works with different data
* types, so you don't have to write the same code multiple times.
* 
* Template Function:
* A single function that can work with different types (like int, 
* float, or string). For example, one max() function can compare 
* both integers and decimals.
********************************************************************/
#include <iostream>
#include <string>

using namespace std;

// Template Function that find the maximum of two values
template <class T>
T maximum(T x, T y) {
    return x > y? x : y;
}

// Template Function that add two different type of values
template <class T, class R>
void add(T x, R y) {
    cout << x << " + " << y << " = " << x + y << endl;;
}

int main() {
    string s1 {"HAI"}, s2 {"hai"};

    // Find the maximum of two integers
    cout <<  "Maximum of 11 & 33 is " << maximum(11, 33) << endl;

    // Find the maximum of two floats
    cout << "Maximum of 7.5f and 35.5f is " << maximum(7.5f, 35.5f) << endl;

    // Find the maximum of two strings
    cout << "Maximum of " << s1 << " and " << s2 << " is " << maximum(s1,s2);
    cout << endl << endl;

    // Add two integers
    add(12, 24);

    // Add integer & float
    add(31, 12.5f);

    // Add float & double
    add(25.5f, 35.5);

    return 0;
}