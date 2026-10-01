/******************************************************************
*                   String Tokenization
* 
* In C++ "strtok(str, "tok_symbols")" function is used to tokenize
* the given string.
* - Parameter "str" is the string that we wanted to tokenize.
* - Parameter "tok_symbols" is the string of symbols on the basis 
*   of which we wanted to create tokens from the string "str".
* 
* Note that "strtok()"" modifies the original string by replacing
* delimiters with '\0' (null terminators).
*******************************************************************/
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s1[] {"x=10;y=20;z=35;"};
    cout << "Tokens for the given string, \"" << s1 << "\" are:" << endl;

    // Get the first token from the string
    char *token = strtok(s1, "=;");

    // Loop to get all the tokens from the string
    while(token != NULL) {
        cout << token << endl;
        // Since wee already specified string to "strtok()", now
        // we need to specify NULL instead of specifying string again
        token = strtok(NULL, "=;");
    }


    //Since strtok()"" modifies the original string by replacing
    // delimiters with '\0' (null terminators).
    // So use different character array with the same string value
    // to avoid any problems
    char s2[] {"x=10;y=20;z=35;"};

    // Let's tokenize the given string using delimiter ";" only
    // Get the first token from the string
    token = strtok(s2, ";");

    // Loop to get all the tokens from the string
    cout << endl;
    cout << "Tokens for the given string, using ';' are:" << endl;
    while(token != NULL) {
        cout << token << endl;
        // Since wee already specified string to "strtok()", now
        // we need to specify NULL instead of specifying string again
        token = strtok(NULL, ";");
    } 

    return 0;
}