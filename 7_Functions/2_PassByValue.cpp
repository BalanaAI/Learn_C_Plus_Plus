/*****************************************************************
*                          Pass By Value
* 
* In Pass By Value method of parameter passing method, the values 
* of the actual parameters are copied into the formal parameters.
* This means changing the formal parameters have no effect on the
* values of the actual parameters.
* If you want a function to just take the values and perform the 
* operation and return the result then you use Call By Value 
* mechanism.
******************************************************************/
#include <iostream>

using namespace std;

void swap(int a, int b) {
    cout << "Before swaping formal parameters, a = " << a << " and b = " << b;
    cout << endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "After swaping formal parameters, a = " << a << " and b = " << b;
    cout << endl << endl;
}


int main() {
    int x {10}, y {20};
    cout << "Before calling swap() Actual parameters are:" << endl;
    cout <<"x = " << x << " and y = " << y << endl << endl;
    swap(x, y);
    cout << "After calling swap() Actual parameters are:" << endl;
    cout <<"x = " << x << " and y = " << y << endl;
    return 0;
}