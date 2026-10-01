/***********************************************************************
*           Substr and Compare Methods of string class
* 
* The string class "substr(start_index, no_of_char)" method is used to 
* extract a substring from the string. If we do not specify how many
* characters substring we wanted to extract then by default it will
* extract from the starting index position till the end.
* 
* The string class "compare()" method compares two string objects and 
* return either zero, -ve or +ve result based on the contents of the
* strings. 
************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str {"Programming"};

    // Extract substring
    cout << "str.substr(3) = " << str.substr(3) << endl; // gramming
    cout << "str.substr(3, 4) = " << str.substr(3, 4) << endl; // gram

    // Comparing Equal string objects, result will be zero
    string s1 {"Hello"};
    string s2 {"Hello"};
    cout << endl;
    cout << "s1.compare(s2) = " << s1.compare(s2) << endl;  // 0

    // Comparing first string is alphabetically first, result negative
    string s3 {"hello"};
    cout << "s1.compare(s3) = " << s1.compare(s3) << endl;  // -ve

    // Comparing first string is alphabetically last, result positive
    string s4 {"World"};
    cout << "s4.compare(s1) = " << s4.compare(s1) << endl;  // +ve

    return 0;
}