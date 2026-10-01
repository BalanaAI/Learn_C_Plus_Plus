/*************************************************************************
*                   Reading and Writing Strings
* 
* The "cout" function print the string until it encounters a null
* character (also called string terminator).
* The "cin" function reads the string until it encounters a space 
* character in the string. Everything before the space is considered
* a string.
* The "cin.get()" function takes the whole string until you hit the
* "enter" key. The "enter" key is not taken by the "cin.get()" function.
* 
* The "cin.ignore()" function will ignore any extra remaining characters 
* after reading the first string, such as the new-line character '\n'.
* 
* The "cin.getline()" function will read the entire line.
**************************************************************************/

#include <iostream>

using namespace std;

int main() {
    char s1[50];
    char s2[50];

    // cout << "Enter your name: ";
    // cin >> s1;      // This should read "John", not "John Smith"
    // cout << "Welcome, " << s1 << endl;

    // cout << "\nEnter your name: ";
    // cin.get(s1, 50);    // This should read the name with spaces
    // cout << "Welcome, " << s1 << endl;

    /*********************************************************************
    * The following code will output:
    * 
    * Enter your name: John Smith
    * Welcome, John Smith
    * Enter your name again: Welcome, 
    * 
    * This problem occurs due to the first "cin.get()"" function. When
    * the user give input for the first time and press the "enter" key
    * then the string is stored in "s1" and the newline ()"enter" key) is
    * stored in s2, and therefore the program executes without stopping 
    * for taking input for s2.
    * 
    * To avoid such problems, there are two solutions.
    * - First use "cin.ignore()" function after taking the first input 
    *   using the "cin.get()" function. The "cin.ignore()" function will
    *   ignore any extra remaining characters after reading the first 
    *   string, such as the new-line character '\n'.
    * 
    * - Second solution is to use "cin.getline()" function instead of 
    *   using "cin.get()" function. The "cin.getline()" function will read
    *   the entire line.
    **********************************************************************/
    // cout << "Enter your name: ";
    // cin.get(s1, 50);
    // cout << "Welcome, " << s1 << endl;

    // cout << "Enter your name again: ";
    // cin.get(s2, 50);
    // cout << "Welcome, " << s2 << endl;


    // Following code using "cin.ignore()" has handled the problem
    // cout << "Enter your name: ";
    // cin.get(s1, 50);
    // cout << "Welcome, " << s1 << endl;

    // cin.ignore();

    // cout << "Enter your name again: ";
    // cin.get(s2, 50);
    // cout << "Welcome, " << s2 << endl;


    // Following code using "cin.getline()" has handled the problem
    // of taking new-line as input
    cout << "Enter your name: ";
    cin.getline(s1, 50);
    cout << "Welcome, " << s1 << endl;

    cout << "Enter your name again: ";
    cin.getline(s2, 50);
    cout << "Welcome, " << s2 << endl;

    return 0;
}