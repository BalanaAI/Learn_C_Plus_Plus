/********************************************************
*               Multiplication Table
* 
* Write a program that asks the user for the number and
* print the multiplication table for that number.
*********************************************************/

#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "Enter number for multiplication table: ";
    cin >> number;

    cout << "Here is the multiplication table for " << number << ":" << endl;
    for(int i = 1; i <= 10; ++i) {
        cout << number << " x " << i << " = " << number * i << endl;
    }
    return 0;
}