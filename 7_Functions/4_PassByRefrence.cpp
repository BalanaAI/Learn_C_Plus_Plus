/*************************************************************************
*                        Pass By Refrence
* 
* Refrences are nicknames or aliases to exisitng variables.
* In Pass By Refrence mechanism, we pass the actual parameters in the
* function call but have refrences (aliase) to those parameters as formal
* parameters.
* Whenever you use Call By Reference mechanism it will not generate 
* separate piece of machine code, but it will copy the machine code of the
* function at the place of function call. So, this means swap() is not a 
* seperate function but it is a part of main() function only. There is no
* activation record created and actually function is not called.
* 
* When do you use Call By Reference?
* When you want the actual parameters should be modified then use Call By
* Reference.
* Second point you should not write any complex logic inside the function
* if you are using Call By Reference. Reason this code has to be copied at
* the place whatever the function is called. if you call multiple times 
* then multiple times copying will be done. So if the code is complex it 
* may not be able to do it perfectly. So usually you find warnings if 
* you're using loops inside this type of function. So, when you use Call
* By Reference avoid using loops.
* 
* One more thing is that if the piece of machine code of a function is 
* copied at the place of function call then such functions are called as
* Inline Functions in C++. When you use a Call By Reference mechanism,
* function automatically becomes in-line function.
**************************************************************************/
#include <iostream>

using namespace std;

void swap(int &a, int &b) {
    cout << "Before swaping formal parameters, a = " << a;
    cout << " and b = " << b;
    cout << endl;
    cout << "Address of a = " << &a << endl;
    cout << "Address of b = " << &b << endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "After swaping formal parameters, a = " << a;
    cout << " and b = " << b;
    cout << endl << endl;
}


int main() {
    int x {10}, y {20};
    cout << "Before calling swap() Actual parameters are:" << endl;
    cout <<"x = " << x << " and y = " << y << endl;
    cout << "Address of x = " << &x << endl;
    cout << "Address of y = " << &y << endl << endl;
    swap(x, y);
    cout << "After calling swap() Actual parameters are:" << endl;
    cout <<"x = " << x << " and y = " << y << endl;
    return 0;
}