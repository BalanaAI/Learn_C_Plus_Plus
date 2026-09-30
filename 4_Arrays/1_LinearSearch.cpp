/******************************************************************S
*                       Linear Search
* 
* Write a program that asks the user to enter an array and the 
* key (element to search from array). Using Linear Search, if the
* Key is found in the given array then display its position in the
* array, else display the message not found to the user.
*******************************************************************/

#include <iostream>

using namespace std;

int main() {
    int A[10], key;

    cout << "Enter 10 elements to be stored in the array: ";
    for(int i = 0; i < 10; i++)
        cin >> A[i];
    
    cout << "\nEnter Key to search: ";
    cin >> key;

    for(int i = 0; i < 10; i++) {
        if(A[i] == key) {
            cout << "Element " << key << " found at location " << i << endl;
            return 0;
        }
    }
    cout << "Sorry, Element " << key << " not found!" << endl;
    return 0;
}