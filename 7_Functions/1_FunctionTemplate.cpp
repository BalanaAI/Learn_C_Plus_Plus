/************************************************************************
*                        Function Template
* 
* A function template is a blueprint that tells the compiler how to 
* generate functions for different data types automatically, so you 
* don't have to write the same function multiple times.
* You'll often see:
* 
* -> template <typename T>
* 
* -> template <class T>
* 
* For basic templates, they mean the same thing. Both are valid.
*************************************************************************/
#include <iostream>

using namespace std;

// Without Function template we need 4 functions
// int maximum(int a, int b) {
//     return a > b ? a : b;   // Using Conditional Operator (Ternary Operator)
// }

// float maximum(float a, float b) {
//     return a > b ? a : b;   // Using Conditional Operator (Ternary Operator)
// }

// double maximum(double a, double b) {
//     return a > b ? a : b;   // Using Conditional Operator (Ternary Operator)
// }

// char maximum(char a, char b) {
//     return a > b ? a : b;   // Using Conditional Operator (Ternary Operator)
// }

// Using Function Template
template <class T>
// Both input types should be of same type as well as output 
T maximum(T a, T b) {
    return a > b ? a : b;
}

int main() {
    // Using Function Template compiler creates one for each type
    // Using integer
    cout << "maximum(12, 15) = " << maximum(12, 15) << endl;
    // Using Float
    cout << "maximum(2.5f, 7.3f) = " << maximum(2.5f, 7.3f) << endl;
    // Using double
    cout << "maximum(5.9, 11.2) = " << maximum(5.9, 11.2) << endl;
    // Ambiguous Function call, will generate error b/cz argument types
    // are different
    // cout << "maximum(9.1f, 22.2) = " << maximum(9.1f, 22.2) << endl;
    // Using character
    cout << "maximum('a', 'F') = " << maximum('a', 'F') << endl;

    return 0;
}