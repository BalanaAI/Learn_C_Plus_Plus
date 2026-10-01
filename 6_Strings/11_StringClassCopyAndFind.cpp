/************************************************************************
*           Copy and Find Methods of string Class
* 
* The string class "copy(dest_str, no_of_char)" method is used to
* either copy the whole string into the destination string or the number
* of characters from source to destination. Also note that the destination
* string should not be a string object, but it should be a C style 
* character array.
* 
* The string class "find("str" or 'char')" method is used to find either 
* the string or some character in the target string. If it is found then
* its index will be returned, otherwise a negative number or some garbage
* value will be returned. The "find()" method has another variant 
* "rfind()" that search from right hand side in the string.
*************************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1 {"Welcome"};  // source string 
    char s2[25];            // destination character array
    char s3[25];            // destination character array

    // Copy whole string
    s1.copy(s2, s1.length());
    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;

    // Copy specified number of characters
    s1.copy(s3, 3);
    cout << endl;
    cout << "s1 = " << s1 << endl;
    cout << "s3 = " << s3 << endl;

    // Find substring in a string
    string s4 {"How are you?"};
    cout << endl;
    cout << "s4.find(\"are\") = " << s4.find("are") << endl;    // index 4
    cout << "s4.find(\"is\") = " << s4.find("is") << endl;    // Garbage

    // Find character in a string
    cout << endl;
    cout << "s4.find('o') = " << s4.find('o') << endl;      // index 1
    cout << "s4.find('p') = " << s4.find('p') << endl;      // Garbage
    cout << "s4.rfind('o') = " << s4.rfind('o') << endl;    // index 9

    // Find first instance of character in a string
    string s5 {"Hello world"};
    cout << endl;
    cout << "s5.find_first_of('l') = " 
         << s5.find_first_of('l') << endl;  // index 2
    // Find last instance of character in a string
    cout << "s5.find_last_of('l') = " 
         << s5.find_last_of('l') << endl;  // index 9
    // Find first instance of character from specified position
    cout << "s5.find_first_of('l', 4) = " 
         << s5.find_first_of('l', 4) << endl;  // index 9
    
    return 0;
}