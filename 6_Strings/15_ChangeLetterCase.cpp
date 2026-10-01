/****************************************************************
*          Change the Letter Case to Upper of a String
* 
* Write a program that change the case of the letter in a string
* to uppercase. If the case is lower then convert it to upper, 
* and if it is upper then it remains as it is.
*****************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1 {"Hello, World. How are You?"};
    string::iterator ite;

    for(ite=s1.begin(); ite!=s1.end(); ite++) {
        if(*ite >= 97 && *ite <= 122)   //Check if it is Lower-case
            *ite = *ite-32;
    }
    cout << "Uppercase s1 = " << s1 << endl;
    return 0;
}