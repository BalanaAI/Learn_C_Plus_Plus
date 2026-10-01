/***********************************************************************
*                       string Class Iterator
* 
* Iterators are used for traversing or accessing the characters of a 
* string. The string iterator is used to access string characters from
* beginning towards end, and the "reverse_iterator" is used to access
* string characters from end to start of the string.
* Using iterator we can either read or modify the string characters.
************************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1 {"today"};

    // Create iterator
    string::iterator ite;
    // Loop through the string characters using iterator
    for(ite=s1.begin(); ite != s1.end(); ite++) {
        cout << *ite;
    }
    cout << endl;

    // Convert string s1 to Uppercase using iterator
    for(ite=s1.begin(); ite != s1.end(); ite++) {
        *ite = *ite - 32;
    }
    cout << "Uppercase s1 = " << s1 << endl;

    string s2 {"morning"};
    // Print string in Reverse Order using reverse_iterator
    string::reverse_iterator rite;
    cout << endl;
    for(rite=s2.rbegin(); rite != s2.rend(); rite++ ) {
        cout << *rite;
    }
    cout << endl;

    string s3 {"channel"};
    // Loop through the string letters using For Loop & index operator
    cout << endl;
    for(int i=0; s3[i]!='\0'; i++) {
        cout << s3[i];
    }

    // Loop through the string letters using For each Loop
    cout << endl;
    for(auto ch: s3) {
        cout << ch;
    }
    cout << endl;

    // Convert string to uppercase using For Loop & index operator
    cout << endl;
    for(int i=0; s3[i]!='\0'; i++) {
        s3[i] = s3[i] - 32;
    }
    cout << s3;

    return 0;
}