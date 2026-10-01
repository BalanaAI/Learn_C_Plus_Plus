/******************************************************************
*    Replacing, erasing and swapping in string class object
* 
* The "replace(start_index, no_char, rep_str)" method is used to
* replace the specified number of characters at the specified
* position with the specified string.
* The "push_back()" method is used to insert single character at
* the end of the string.
* The "pop_back()" method is used to remove single character at
* the end of the string.
* The "swap()" method is used to swap the contents of two strings.
*******************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str {"Programming"};

    cout << "str = " << str << endl;
    str.replace(3, 6, "HH");
    cout << "str = " << str << endl;    // ProHHng

    string s1 {"Program"};
    // push_back() and pop_back() methods
    cout << endl;
    cout << "s1 = " << s1 << endl;  // Program
    s1.push_back('m');
    cout << "s1 = " << s1 << endl;  // Programm
    s1.push_back('e');
    cout << "s1 = " << s1 << endl;  // Programme
    s1.pop_back();
    cout << "s1 = " << s1 << endl;  // Programm

    string s3 {"C++ Language"};
    string s4 {"Python"};

    cout << endl;
    cout << "s3 = " << s3 << endl;
    cout << "s4 = " << s4 << endl;
    s3.swap(s4);
    cout << "s3 = " << s3 << endl;
    cout << "s4 = " << s4 << endl;
    return 0;
}