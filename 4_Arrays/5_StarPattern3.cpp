/*******************************************************************
*                       Display Star Pattern
* Write a program that displays the stars in the following pattern:
* 
*        *
       * *
     * * *
   * * * *
 * * * * *
********************************************************************/

#include <iostream>

using namespace std;

int main() {
    int max {5};
    for(int i = 0; i < max; i++) {
        for(int j = 0; j < max; j++) {
            if((i + j) >= (max - 1))
                cout << " *";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
} 