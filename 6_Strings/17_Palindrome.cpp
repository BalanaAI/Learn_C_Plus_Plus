/******************************************************************
*              Palindrome String Checking Program
* 
* Write a program to check whether a given string is a palindrome
* or not.
*******************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string original {}, reversed {};
    string::reverse_iterator rite;

    cout << "Enter a string to check for palindrome: ";
    cin >> original;

    for(rite=original.rbegin(); rite != original.rend(); rite++) {
        reversed.push_back(*rite);
    }

    if(original == reversed)
        cout << "Yes it is Palindrome" << endl;
    else
        cout << "No it is not a Palindrome" << endl;

    return 0;
}