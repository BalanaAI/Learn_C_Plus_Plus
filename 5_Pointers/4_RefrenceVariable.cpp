/***************************************************************
*                   Refrence Variable
* 
* A refrence variable is just an alias for some other variable.
* A refrence variable must be initialized when defined.
* A refrence variable cannot be modified to refer to another 
* variable once initialized.
****************************************************************/
#include <iostream>

using namespace std;

int main() {
    int x = 10, z = 35;
    int &y = x;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    x++;    // x = 11
    y++;    // x = 12
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    cout << endl;
    cout << "Address of x = " << &x << endl;
    cout << "Address of y = " << &y << endl;

    // Changing value of refrence variable means changing original 
    y = z;
    cout << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    return 0;
}