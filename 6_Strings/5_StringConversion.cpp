/*************************************************************************
*               String Conversion Functions
* 
* - strtol(str, end_char, no_base): strtol() means string to long conversion
    function. strtol() will convert the given string into a long integer.
    This functions takes the "str", and the end of the string is provided.
    Also the "no_base" of the number is to be specified.
*   
* - strtof(str, end_char): strtof() means string to float conversion 
*   function. strtof() will convert the given string to float. This 
*   function take the "str" and the end of the string as paramters.
* 
**************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s1[] {"235"};
    char s2[] {"54.78"};

    // Convert string to long and float
    long num1 = strtol(s1, NULL, 10);
    float num2 = strtof(s2, NULL);

    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num1 + 10 = " << num1 + 10 << endl;
    cout << "num2 - 10 = " << num2 - 10 << endl;
    
    return 0;
}
