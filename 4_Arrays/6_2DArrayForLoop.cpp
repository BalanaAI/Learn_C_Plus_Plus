/********************************************************************
*           Accessing Elements of 2D Array using For Loop
*********************************************************************/
#include <iostream>

using namespace std;

int main() {
    int A[2][3] = {{2, 4, 6}, {3, 5, 7}};

    cout << "Here is 2D Array A: " << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}