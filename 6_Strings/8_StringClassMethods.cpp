/******************************************************************
*               Methods of the C++ string Class
*******************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str {"Hello"};

    // Length of string
    cout << "str length = " << str.length() << endl;
    // Size of string
    cout << "str size = " << str.size() << endl;
    // Capacity (allocated array size) of string
    cout << "str capacity = " << str.capacity() << endl;

    // Resize "str" and then verify it capacity
    str.resize(50);
    // Current str capacity after resizing to 50
    cout << "str capacity = " << str.capacity() << endl;

    // Maximum string size allowed on my system
    cout << "str max_size = " << str.max_size() << endl;
    // Clear str
    str.clear();
    // Verify that str content is now cleared
    cout << "str = " << str << endl;

    // Another way to verify whether the string is empty or not
    if(str.empty())
        cout << "str is now empty" << endl;
    else
        cout << "str = " << str << endl;
    
    return 0;
}