/****************************************************************
*     Append and Insert string into existing string object
* 
* The "append()" method will append the new string to the end 
* of existing string.
* The "insert(index, sub_str)" method will insert the new string
* at the specified position in the existing string.
*****************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str {"Hello, "};

    cout << "str capacity = " << str.capacity() << endl;
    str.append("world!");
    cout << "str capacity = " << str.capacity() << endl;
    str.append(" I hope you are all well. Once again we are going to meet.");
    cout << "str capacity = " << str.capacity() << endl;
    cout << "str length = " << str.length() << endl;

    string s1 {"Hello"};
    string s2 {"How you"};
    cout << "\ns1 = " << s1 << endl;
    // Insert a string into existing string
    s1.insert(3, "kk");
    cout << "s1 = " << s1 << endl;

    cout << "\ns2 = " << s2 << endl;
    // Insert some specified number of characters from new
    // string into existing string
    s2.insert(3, " area", 4);
    cout << "s2 = " << s2 << endl;
    return 0;
}
