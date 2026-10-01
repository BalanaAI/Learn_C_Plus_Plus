/**************************************************************
*                       Linear Search
* 
* Write a program for Linear Search using Functions
***************************************************************/
#include <iostream>

using namespace std;

int linearSearch(int A[], int key, int arr_size) {
    // If you pass a built-in array to a function, it decays into a pointer.
    // so the "sizeof" no longer gives the array length
    cout << "Address of A = " << A << endl << endl;
    for(int i=0; i<arr_size; i++) {
        if(A[i] == key)
            return i;
    }
    return 0;
}


int main() {
    int array[] {2, 4, 5, 7, 10, 9, 13};
    int key {0}, arr_length {0}, index {0};
    cout << "Address of array " << array << endl;
    // Find the size of array
    arr_length = sizeof(array) / sizeof(array[0]);
    
    cout << "Enter an Element to be Searched: ";
    cin >> key;

    index = linearSearch(array, key, arr_length);
    if(index > 0) {
        cout << "Element " << key << " found in the array at " << index;
        cout << endl;
    }  
    else {
        cout << "Element " << key << " not found in the array" << endl;
    }
    return 0;
}