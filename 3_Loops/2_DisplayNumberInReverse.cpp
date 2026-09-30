/****************************************************************
*                   Reverse a Number
* Write a program that takes a number from user and then display
* the digits of that number in reverse order to the user.
*****************************************************************/

#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "Enter a number to display in reverse: ";
    cin >> number;

    cout << "Reverse of " << number << " is ";
    while(number > 0) {
        cout << number % 10;
        number /= 10;
    }
    return 0;
}