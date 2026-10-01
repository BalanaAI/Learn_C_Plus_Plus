/*****************************************************************
*                     Pointer Arithmetic
* 
* The only five arithmetic operations allowed on pointers are:
* 1. p++
* 2. p--
* 3. p = p + some_integer (e.g, 2)
* 4. p = p - some_integer (e.g. 3)
* 5. Difference between two pointers, d = p - q, actual addresses
*    are subtracted and then the result is divided by the data type
     size pointer is pointing to, to get the number of elements 
     between two pointers. If the result is negative then we know 
     which pointer is first and which is second.
*******************************************************************/
#include <iostream>

using namespace std;

int main() {
    int A[] = {2, 4, 6, 8, 10};
    // Declare a pointer to integer
    int *p;

    // Initialize pointer p to the start address of array
    p = A;

    cout << "Value at location p currently pointing to: " << *p;    // 2

    // Perform arithmetic operations on pointer
    p++;    // Pointer incremented by 1
    cout << "\nValue at location p currently pointing to: " << *p;    // 4
    p--;    // Pointer decremented by 1
    cout << "\nValue at location p currently pointing to: " << *p;    // 2
    p = p + 2;  // Pointer incremented by 2
    cout << "\nValue at location p currently pointing to: " << *p;    // 6
    cout << "\nValue at location p currently pointing minus 2: " << *(p-2); // 2
    p = p - 2;  // Pointer decremented by 2
    cout << "\nValue at location p currently pointing to: " << *p;

    cout << endl <<"\nArray elements are: ";
    for(int i = 0; i < 5; i ++) {
        cout << A[i] << " ";
    }
    cout << endl; 

    cout << "Acessing array elements using pointer: ";
    for(int i = 0; i < 5; i ++) {
        cout << p[i] << " ";
    }
    cout << endl; 

    cout << "Acessing array elements using pointer derefrencing: ";
    for(int i = 0; i < 5; i ++) {
        cout << *(p+i) << " ";      // Derefrencing pointer
    }
    cout << endl; 

    // Declare and initialize another pointer
    int *q = &A[4];
    
    // Difference between two pointers
    cout << "p - q = " << p-q << endl;  // -4
    cout << "q - p = " << q-p << endl;  // 4

    return 0;
}