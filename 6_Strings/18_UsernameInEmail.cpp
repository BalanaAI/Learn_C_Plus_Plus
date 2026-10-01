/*********************************************************************
*               Find Username in Email Address
* 
* Write a program that finds the Username in the given Email Address
**********************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string email {}, username {};
    int index {};

    cout << "Enter email address: ";
    cin >> email;

    // First find the index of '@' sign
    index = email.find_first_of('@');
    // Extract substring upto but not including '@'
    username = email.substr(0, index);
    
    cout << "Username = " << username << endl;

    return 0;
}