/*********************************************************************
*                          All About Throw
* 
* With throw statement I can throw integer value, float value, 
* character value, string value, or even I can throw an exception of 
* user-defined class or built-in class.
**********************************************************************/
#include <iostream>
#include <string>

using namespace std;

class MyException {
    // Userdefined Exception
};

class MySecondException : exception {
    // User-defined Exception inherited from Built-in exception class
};


int main() {
    int x {0}, y{0};
    float z;

    cout << "Enter dividend: ";
    cin >> x;
    cout << "Enter divisor: ";
    cin >> y;

    try {
        if(y==0)
            //throw 25.5;
            // throw string("Division by Zero");
            // throw MyException();
            throw MySecondException();
        z = float(x) / y;
        cout << x << "/" << y << " = " << z << endl;
    }
    // Variable e will take the error thrown in the try block
    // catch(double e) {
    // cout << "Division by Zero: Error " << e << endl; 
    // catch(string e) {
    //     cout << "Error: " << e << endl;
    
    // catch(MyException e) {
    //     // I can't use "e" in cout because it is not overloaded
    //     cout << "Error: Divison by Zero " << endl;

    catch(MySecondException e) {
        // I can't use "e" in cout because it is not overloaded
        cout << "Error: Divison by Zero " << endl;
    }

    // This statement is always executed
    cout << "Good Bye!" << endl;
    return 0;
}