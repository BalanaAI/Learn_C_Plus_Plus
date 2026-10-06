/******************************************************************
*                   Pre-processor Directives
* 
* Preprocessor directives are instructions that are executed before
* the compilation of a C++ program. They tell the preprocessor to 
* perform specific tasks before the compiler processes the source 
* code.
* The #define directive is commonly used to create symbolic 
* constants, allowing constant values to be replaced throughout 
* the program.
* It can also be used to define simple macro functions.
* By using preprocessor directives, programmers can improve code 
* readability, maintainability, and reduce repetition.
*******************************************************************/
#include <iostream>

using namespace std;

// Define Symbolic Constants
#define PI 3.1425

// Define PI as 3.14 if it is not already defined
#ifndef PI
    #define PI 3.14
#endif

// Define function using #define
#define max(x, y) (x>y? x : y)

// Define string to enclosed in double quotes
#define msg(x) #x

int main() {
    // PI is symbolic constant, not a variable
    cout << "PI = " << PI << endl;

    // Using macros
    cout << "max(10, 12) = " << max(10, 12) << endl;

    // The msg() function will insert double quotes along the msg() value
    cout << msg(Hello);

    return 0;
}