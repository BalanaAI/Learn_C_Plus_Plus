/*********************************************************************
*                  Throw and Catch Between Functions
* 
* When a function is called then it should either return the result to
* the caller, or if there is any problem in the function then it 
* should throw an exception and the caller will catch and handle that
* exception.
**********************************************************************/
#include <iostream>

using namespace std;

float division(int a, int b) {
    // If Divisor is Zero, then throw Exception
    if(b==0)
        throw 101;
    return float(a) / b;
}


int main() {
    int x {0}, y{0};
    float z;

    cout << "Enter dividend: ";
    cin >> x;
    cout << "Enter divisor: ";
    cin >> y;

    try {
        z = division(x, y);
        cout << x << "/" << y << " = " << z << endl;
    }
    // Variable e will take the error thrown by "division" function
    catch(int e) {
        cout << "Division by Zero: Error " << e << endl; 
    }

    // This statement is always executed
    cout << "Good Bye!" << endl;
    return 0;
}