/*********************************************************************
*                 Exception Handling Mechanism
* 
* In C++ try…catch block is used for exception handling. Think of try 
* and catch like a safety system built into your program.
**********************************************************************/
#include <iostream>

using namespace std;

int main() {
    int x {0}, y{0};
    float z;

    cout << "Enter dividend: ";
    cin >> x;
    cout << "Enter divisor: ";
    cin >> y;

    try {
        if(y==0)
            throw 101;
        z = float(x) / y;
        cout << x << "/" << y << " = " << z << endl;
    }
    // Variable e will take the error thrown by "throw" statement 
    catch(int e) {
        cout << "Division by Zero: Error " << e << endl; 
    }

    // This statement is always executed
    cout << "Good Bye!" << endl;
    return 0;
}