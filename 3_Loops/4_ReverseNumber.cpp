/****************************************************************
*                   Reverse a Number
* Write a program that takes a number from user and then reverse
* that number and display to the user.
*****************************************************************/

#include <iostream>

using namespace std;

int main() {
    int number, rev_number {0}, r;

    cout << "Enter a number to reverse: ";
    cin >> number;

    while(number > 0) {
        r = number % 10;
        number = number / 10;
        rev_number = rev_number * 10 + r;
    }
    cout << "Reverse number is " << rev_number << endl;
    return 0;
}