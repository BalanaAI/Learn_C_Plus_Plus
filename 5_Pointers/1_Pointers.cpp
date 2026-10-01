/*******************************************************
*                   C++ Pointers
********************************************************/
#include <iostream>

using namespace std;

int main() {
    int x = 10;
    
    // Pointer Declaration
    int *p;

    // Pointer Initialization
    p = &x;

    cout << "x = " << x << endl;
    cout << "Address of x = " << &x << endl;
    cout << "Value of p = " << p << endl;
    cout << "Address of p = " << &p << endl;
    // Derefrencing a Pointer
    cout << "Value at address pointing by p = " << *p << endl;
    return 0;
}