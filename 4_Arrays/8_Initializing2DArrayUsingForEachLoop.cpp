/********************************************************************
*         Accessing Elements of 2D Array using For Each Loop
*********************************************************************/
#include <iostream>

using namespace std;

int main() {
    // Just declare an array
    int A[2][3];

    // Take array elements from user
    cout << "Enter Array Elements, one Row at a time:" << endl;
    for(auto &row: A) {
        for(auto &col: row) {
            cin >> col;
        }
    }

    cout << "Here is 2D Array A: " << endl;
    // Using refrence and For Each Loop
    // For each row in A
    for(auto &row: A) {
        // Using refrence and For Each Loop
        // For each element in Row i
        for(auto &col: row) {
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}