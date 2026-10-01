/*************************************************************************
*                        Pass By Address
* 
* In Pass By Address method of parameter passing, the addresses of the 
* actual parameters are passed into the formal parameters (pointers). This
* means changing the formal parameters can access the values of the actual
* parameters and can modify them.
* If you want any function to modify the actual parameters then we need to
* go for Pass By Address mechanism.
* Also it is not necessary that both the variables must be call by address
* only. One variable can be Call By Value and another variable can be Call
* By Address, you can take it like this. It all depends on your 
* requirements.
**************************************************************************/
#include <iostream>

using namespace std;

void swap(int *a, int *b) {
    cout << "Before swaping formal parameters, *a = " << *a;
    cout << " and *b = " << *b;
    cout << endl;
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    cout << "After swaping formal parameters, *a = " << *a;
    cout << " and *b = " << *b;
    cout << endl << endl;
}


int main() {
    int x {10}, y {20};
    cout << "Before calling swap() Actual parameters are:" << endl;
    cout <<"x = " << x << " and y = " << y << endl << endl;
    // Passing addresses of variables
    swap(&x, &y);
    cout << "After calling swap() Actual parameters are:" << endl;
    cout <<"x = " << x << " and y = " << y << endl;
    return 0;
}