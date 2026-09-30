/************************************************************************
*                           GCD of Two Numbers
* 
* Write a program that takes two numbers from the user and find the GCD
* of those numbers and display it to the user.
*************************************************************************/

#include<iostream>

using namespace std;

int main() {
    int temp_n, temp_m, n, m;

    cout << "Enter two numbers to find the GCD of them: ";
    cin >> n >> m;

    temp_m = m;
    temp_n = n;
    while(temp_m != temp_n) {
        if(temp_m > temp_n)
            temp_m = temp_m - temp_n;
        else if(temp_n > temp_m)
            temp_n = temp_n - temp_m;
    }
    // Since both temp_m & temp_n are equals, we find GCD
    cout << "The GCD of " << n << " and " << m << " is " << temp_m << endl;
    return 0;
}