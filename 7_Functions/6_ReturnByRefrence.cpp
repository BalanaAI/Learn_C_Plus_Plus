/*****************************************************************
*                       Return By Reference
* 
* Mostly we make the function calls as rvalue, but with the help of
* returning a reference we can make the function calls as lvalue.
*********************************************************************/
#include <iostream>

using namespace std;

// This function return a reference to a variable
int & func(int &a) {
    cout << "Inside function the value of a = " << a << endl;
    
    // Return a reference
    return a;
}


int main() {
    int x {10};
    cout << "Before a function call, x = " << x << endl;

    // Function will act as reference to a variable
    func(x) = 25;     // Here, func(x) will become x and we can assign to it

    cout << "After a function call return a reference and then modified";
    cout << " that reference value, we have x = " << x << endl;
    return 0;
}