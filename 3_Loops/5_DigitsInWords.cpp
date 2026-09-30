/****************************************************************
*                 Digits in Words of a Number
* Write a program that takes a number from user and then display
* words for each digit of that number.
*****************************************************************/

#include <iostream>

using namespace std;

int main() {
    int number, rev_number {0}, remainder;

    cout << "Enter a number to display digits in words: ";
    cin >> number;

    while(number > 0) {
        remainder = number % 10;
        number = number / 10;
        rev_number = rev_number * 10 + remainder;
    }

    while(rev_number > 0) {
        remainder = rev_number % 10;
        rev_number /= 10;
        switch(remainder) {
            case 1:
                cout << "One ";
                break;
            case 2:
                cout << "Two ";
                break;
            case 3:
                cout << "Three ";
                break;
            case 4:
                cout << "Four ";
                break;
            case 5:
                cout << "Five ";
                break;
            case 6:
                cout << "Six ";
                break;
            case 7:
                cout << "Seven ";
                break;
            case 8:
                cout << "Eight ";
                break;
            case 9:
                cout << "Nine ";
                break;
        }
    }
    
    return 0;
}