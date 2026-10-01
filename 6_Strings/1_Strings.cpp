/******************************************************************
*                          Strings in C++
*******************************************************************/
#include <iostream>

using namespace std;

int main() {
    // Different ways of declaring and initializing strings
    char p[10] = "Hello";
    char q[] = "Hello";
    // Creating character array with character literals
    char r[] {'H', 'e', 'l', 'l', 'o', '\0'};
    // Creating character array by giving ASCII codes of alphabets
    char s[] {65, 66, 67, 68, '\0'};

    // '\0' is null or terminating character, and what is store behind
    // this character are ignored by compiler
    char t[] {'M', 'a', 't', 'h', '\0', 'w', 'o', 'r', 'l', 'd'};
    char u[] {65, 66, 67, 68, 0, 69, 70};

    // Creating character array using pointer
    // Following statement generate warning of,
    // " C++ 11 forbids converting a string constant to char* " 
    char *v = "World";      

    // Creating string using C++ string class
    string w {"C++ string"};    // string header file is required

    cout << "p = " << p << endl;
    cout << "q = " << q << endl;
    cout << "r = " << r << endl;
    cout << "s = " << s << endl;
    cout << "t = " << t << endl;    // Only Math will be printed
    cout << "u = " << u << endl;    // only ABCD will be printed
    cout << "v = " << v << endl;
    cout << "w = " << w << endl;

    return 0;
}