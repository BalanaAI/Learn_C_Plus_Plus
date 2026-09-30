/***************************************************************
*                       Armstrong Number
* 
* An Armstrong number (also called a narcissistic number) is a 
* number that is equal to the sum of its own digits, where each
* digit is raised to the power of the total number of digits.
* For example, 9474 has 4 digits:
* 
* 9^4 + 4^4 + 7^4 + 4^4 = 6561+256+2401+256 = 9474
*
* So 9474 is an Armstrong number.
* 
* Write a program that takes a number from user and determine
* whether the number is Armstrong number or not.
****************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int number, no_of_digits {0}, temp, digit, sum {0};

    cout << "Enter number to determine whehter it is Armstrong or not: ";
    cin >> number;
    temp = number;
    while(temp > 0) {
        temp /= 10;
        no_of_digits++; 
    }

    temp = number;
    while(temp > 0) {
        digit = temp % 10;
        sum += pow(digit, no_of_digits);
        temp /= 10;
    }
    if(sum == number)
        cout << number << " is Armstrong Number" << endl;
    else
        cout << number << " is not Armstrong Number" << endl;

    return 0;
}