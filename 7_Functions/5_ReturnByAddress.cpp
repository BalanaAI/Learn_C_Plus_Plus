/*****************************************************************
*                       Return By Address
* 
* A function can also return an address to a variable created on
* the heap. This variable may be a primitive type or a container
* type like array, vector, etc.
* 
* A heap memory is global to the program, which means that a heap
* memory can be accessed from any part of the program.
* 
 *Always remember that a function can not return an address of the
* local variable, because a local variable is destroyed as soon as
* control is returned to the calling function.
******************************************************************/
#include <iostream>

using namespace std;

/*This function should create an array on heap and return a
pointer to that array to the calling function */
int * createArray(int size) {
    // Create an array on heap
    int *ptr = new int[size];
    
    // Populate the newly created array
    for(int i=0; i<size; i++)
        ptr[i] = i + 1;     // Array elements should be 1, 2, 3, 4, 5
    
    // Display where the pointer is pointing
    cout << "ptr = " << ptr << endl << endl;
    // Return the array pointer
    return ptr;
}


int main() {
    int arr_size {0};
    // Ask the user, how big array is required
    cout << "Enter the size of required array: ";
    cin >> arr_size;

    // Create a pointer to integer & assign the dynamic array address
    int *array_ptr = createArray(arr_size);

    // Display where array_ptr is pointing
    cout << "array_ptr = " << array_ptr << endl;
    // Display the elements of array
    cout << "The array elements are: ";
    for(int i=0; i<arr_size; i++)
        cout << array_ptr[i] << " ";
    cout << endl;

    return 0;
}