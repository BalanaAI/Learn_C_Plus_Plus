/*******************************************************************
*                       Display Star Pattern
* Write a program that displays the stars in the following pattern:
*
*                *    
*                * *   
*                * * * 
*                * * * *
********************************************************************/

#include <iostream>

using namespace std;

int main() {
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(j <= i)
                cout << "* ";
        }
        cout << endl;
    }
    return 0;
}