/********************************************************************
*         Accessing Elements of 2D Array using For Each Loop
*********************************************************************/
#include <iostream>

using namespace std;

int main() {
    // Just 4 array elements are initialized & will be initialized to zero
    int A[2][3] = {2, 4, 6, 3};

    cout << "Here is 2D Array A: " << endl;
    // Using refrence and For Each Loop
    // For each row in A
    for(auto &i: A) {
        // Using refrence and For Each Loop
        // For each element in Row i
        for(auto &j: i) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}