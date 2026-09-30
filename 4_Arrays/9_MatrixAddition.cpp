/**************************************************************
*                   Matrix Addition 
* 
* Matrices can be only added and subtracted if they have the 
* same diemnsions.
***************************************************************/
#include <iostream>

using namespace std;

int main() {
    int A[2][3] = {{5, 5, 5}, {5, 5, 5}};
    int B[2][3] = {{3, 3, 3}, {3, 3, 3}};
    int C[2][3];

    cout << "The resultant matrix C after addition of A & B:" << endl;
    for(int i = 0; i < 2; i++ ){
        for(int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}