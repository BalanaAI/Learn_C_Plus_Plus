/********************************************************************
*                       Leap Year Program
* 
* All years which are perfectly divisble by 4 are leap years except
* for centuray years (years ending with 00) which is leap year only
* if it is perfectly divisible by 400.
* For example, 2012, 2004, 1968, etc. are leap years but 1971, 2006,
* etc. are not leap years. Similarly, 1200, 1600, 2000, 2400, are 
* leap years but 1700, 1800, 1900, etc. are not.
*
* Write a program that asks the user to enter a year and then check
* whether the year entered by the user is leap year or not.
*********************************************************************/

#include <iostream>

using namespace std;

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if(year % 4 == 0) {
        if(year % 100 == 0) {
            if (year % 400 == 0) {
                cout << "Year " << year << " is a leap year" << endl;
            }
            else {
                cout << "Year " << year << " is not a leap year" << endl;
            }
        }
        else {
            cout << "Year " << year << " is a leap year" << endl;
        }
    }
    else {
        cout << "Year " << year << " is not a leap year" << endl;
    }
    return 0;
}