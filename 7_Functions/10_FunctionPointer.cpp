/*****************************************************************
*                   Pointer to a Function
* 
* In C++ we can also create a pointer to a function. To create a
* pointer to a function we must specify the function prototype,
* that is, function return type, the pointer name must be enclosed
* in parentheses, and then followed by parentheses with parameter
* types. For example,
*
* void (*func_ptr)();
* 
* The above pointer to a function will be used to store the address
* of the function that should take no parameter and return nothing.
* 
* Then we need to initialize "func_ptr" with the address of some 
* function, such as:
* 
* func_ptr = dsiplay;
* 
* The last thing is that we can call that function using function
* pointer in two ways:
* - (*func_ptr)();
* - func_prt();
* Both above calls invoke the function pointed to by "func_ptr".
* This works because when a function pointer appears in a function-
* call expression, C++ automatically dereferences it. So func_ptr()
* is just shorthand for (*func_ptr)().
* 
* Note that a function pointer can point on all those functions
* which have same signatures.
********************************************************************/
#include <iostream>

using namespace std;

int maximum(int x, int y) {
    return x>y ? x : y;
}


int minimum(int x, int y) {
    return x<y ? x : y;
}


int main() {
    int a {0}, b{0};

    // Declaration of Function Pointer
    int (*ptr)(int, int);
    
    cout << "Enter two integers to find maximum(separated by space): ";
    cin >> a >> b;

    // Initialization of Function Pointer
    ptr = maximum;      // Pointing to maximum() function
    // Dereference Function Pointer
    cout << "Maximum is " << (*ptr)(a, b) << endl; // maximum() called

    // Changing Function Pointer Address
    ptr = minimum;      // Pointing to minimum() function
    // C++ automatically dereferences it
    cout << "Minimum is " << ptr(a, b) << endl; // minimum called

    return 0;
}