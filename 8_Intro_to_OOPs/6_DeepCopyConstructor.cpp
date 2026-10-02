/*******************************************************************
*                  Deep Copy Constructor
* 
* A deep copy constructor creates a new object by copying the actual
* data of another object, not just the addresses of its pointers. If
* the object contains dynamically allocated memory, it allocates new
* memory and copies the contents into it. As a result, each object 
* has its own separate copy of the data, so changes to one object do
* not affect the other.
********************************************************************/
#include<iostream>

using namespace std;

class Deep {
    private:
        // Private Data Members
        int array_length;
        int *ptr;
    
    public:
        // Parameterized Constructor
        Deep(int size) {
            array_length = size;
            // Create an array of specified size on Heap
            ptr = new int[array_length];
            // Populate the array with default values
            for(int i=0; i<array_length; i++)
                ptr[i] = (i+1) * 5;     // Populate with Multiples of 5
        }

        // Copy (Deep copy) Constructor
        Deep(Deep &d) {
            array_length = d.array_length;
            ptr = new int[array_length];    // Create a new array on Heap
            // Copy the array elements from existing array 
            for(int i=0; i<array_length; i++)
                ptr[i] = d.ptr[i];
        }

        // Public Member Function
        void display_arrray() {
            cout << "Array Address = " << ptr << endl;
            cout << "Array Elements are: ";
            for(int i=0; i<array_length; i++)
                cout << ptr[i] << " ";
            cout << endl;
        }
};


int main() {
    // Create an Object of Shallow Class
    Deep d1(5);
    
    // Array address of d1 and its elements
    d1.display_arrray();
    cout << endl;

    // Create a copy object of d1, d2 will have its own array on Heap
    Deep d2(d1);     // This should be a Deep copy of d1

    // Array address of d2 and its elements
    d2.display_arrray();

    return 0;
}