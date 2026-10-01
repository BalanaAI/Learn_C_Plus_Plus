/******************************************************************
*         Pointers Dynamically Allocate Memory from the Heap
*******************************************************************/
#include <iostream>

using namespace std;

int main() {
    int *p;
    
    // Dynamically allocate an array at Heap Memory
    p = new int[5];

    p[2] = 15;
    p[3] = 25;

    cout << "Array p[2] = " << p[2] << endl;
    cout << "Array p[3] = " << p[3] << endl;

    // Once workdone, then release Heap Memory to avoid Memory Leak
    // using delete statement
    delete [] p;

    // After releasing memory, make pointer variable pointing to null
    p = nullptr;

    // Now create a new big array dynamically at Heap
    p = new int[10];

    p[3] = 23;
    p[7] = 77;
    p[9] = 89;

    cout << "\nNew array elements are:" << endl;
    cout << "Array p[3] = " << p[3] << endl;
    cout << "Array p[7] = " << p[7] << endl;
    cout << "Array p[9] = " << p[9] << endl; 

    //Release memory using delete statement
    delete [] p;
    // Assign Null to p
    p = nullptr;

    return 0;
}