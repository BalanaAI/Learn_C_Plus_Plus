/******************************************************************
*       Declaration, Initialization and I/O of string class
* 
* For strings using string class in a program we need to include 
* the "string" header file.
*******************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declaring & Initializing string class object
    string str {"Hello, world!"};
    
    // Output the value of "str" to the screen
    cout << "str = " << str << endl;

    string name {};

    // For Multi-word string input we need to use the getline() function
    cout << "Enter your fullname: ";
    getline(cin, name);
    cout << "Welcome, " << name << endl;

    return 0;
}