/*******************************************************************
*                  Shallow Copy Constructor
* 
* A shallow copy constructor in C++ creates a new object by copying
* the values of another object's data members exactly as they are.
* If the object contains a pointer, only the pointer's address is 
* copied, so both objects end up sharing the same memory, which can
* cause unexpected problems such as accidental modification or 
* double deletion.
********************************************************************/
#include<iostream>

using namespace std;

class Shallow {
    private:
        // Private Data Members
        int array_length;
        int *ptr;
    
    public:
        // Parameterized Constructor
        Shallow(int size) {
            array_length = size;
            // Create an array of specified size on Heap
            ptr = new int[array_length];
            // Populate the array with default values
            for(int i=0; i<array_length; i++)
                ptr[i] = (i+1) * 5;     // Populate with Multiples of 5
        }

        // Copy (Shallow copy) Constructor
        Shallow(Shallow &s) {
            array_length = s.array_length;
            ptr = s.ptr;    // Copy the same array address
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
    Shallow s1(5);
    
    // Array address of s1 and its elements
    s1.display_arrray();
    cout << endl;

    // Create a copy object of s1
    Shallow s2(s1);     // This should be a shallow copy of s1

    // Array address of s2 and its elements
    s2.display_arrray();

    return 0;
}