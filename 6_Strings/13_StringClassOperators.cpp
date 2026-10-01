/********************************************************************
*                   Operators of string Class
* 
* The string class "at()" operator will return a letter at the given
* index in the string object. The "at()" operator is used to just read
* the letter at the specified index in a string.
* 
* The string class "front()" operator will give you the first letter
* of the string object.
* 
* The string class "back()" operator will give you the last letter of
* the string object.
*
* The string class "[]" operator is an overloaded operator that gives
* us the letter at the specified index in the string. Also the "[]"
* operator can be used to change the contents of the string at the 
* specified index.
* 
* The string class "+" operator is an overloaded operator that 
* concatenate two strings.
* 
* The string class "=" operator is also an overloaded operator that 
* copies the contents of one string into another string.
*********************************************************************/
#include <iostream>
#include <string> 

using namespace std;

int main() {
    string str {"Holiday"};
    string s1 {"Hello, "};
    string s2 {"world"};
    string s3 {};
    string s4 {};
    string s5 {};

    // Get a letter at specified index in string
    cout << "str.at(4) = " << str.at(4) << endl;
    cout << "str[4] = " << str[4] << endl;

    // Strings are also modifiable
    str[4] = 'M';
    cout << "str = " << str << endl;

    // Letters at front and back of strings
    cout << endl;
    cout << "str.front() = " << str.front() << endl;
    cout << "str.back() = " << str.back() << endl;

    // Concatenate two strings using "+" operator
    s3 = s1 + s2;
    cout << endl;
    cout << "s3 = " << s3 << endl;
    s4 = s1 + "How are you?";
    cout << "s4 = " << s4 << endl;

    // Assign one string to another
    s5 = s1;
    cout << endl;
    cout << "s1 = " << s1 << endl;
    cout << "s5 = " << s5 << endl;

    return 0;
}