/********************************************************************
*                       Constant Qualifier
* 
* A constant identifiers cannot be modified throughout the program. 
* So if you have some value, you want to hold it as it is, then you 
* can declare it as constant.
* - Using define directive
* - Using "const" qualifier
* 
* Following are some other uses of C++ "const" qualifier:
* - Pointer to a constant type data
* - Constant Pointer to a data
* - Constant Pointer to a constant type data
* - Constant Function
* - Constant Reference Parameter
* 
*********************************************************************/
#include <iostream>
#define z 3.14        // Define constan using define directive

using namespace std;

class Demo {
    private:
        int x {10};
        int y {20};
    
    public:
        void display() const {
            // When a function is declared constant, then we cannot 
            // modify class data members within that function.
            // ++x;
            cout << "x = " << x << ", y = " << y << endl;
        }
};


// "const" Qualifier with Function Reference Parameters
void test_func(const int &e, const int &f) {
    cout << "e = " << e << ", f = " << f << endl;
    // Constant Reference Parameters cannot be modified 
    // ++e;
}

int main() {
    // Following are same ways to declare constant identifiers using "const"
    const int x = 5;
    int const y = 15;

    // Constant Identifier can not be modified, Only accessed and used
    // x = 34;
    // y = 75;
    // z = 45.5;
    cout << "x = " << x << ", y = " << y <<  ", z = " << z << endl;
    cout << endl;

    // A pointer can modify the variable data
    int a = 49, b = 33, c = 17;
    int *ptr1 = &a;
    // Increment (Modify) the value pointed by the pointer "ptr1"
    ++(*ptr1);
    cout << "a = " << a << ", *ptr1 = " << *ptr1 << endl;
    // Modify the pointer to point to another variable
    ptr1 = &b;
    ++(*ptr1);
    cout << "b = " << b << ", *ptr1 = " << *ptr1 << endl;
    cout << endl;

    // Pointer to integer constant
    const int *ptr2 = &c;
    // Data Pointed by "ptr2" can not be modified
    // ++(*ptr2);
    // Access the data pointed by "ptr2"
    cout << "c = " << c << ", *ptr2 = " << *ptr2 << endl;
    // Pointer itself can be modified to point to different location
    ptr2 = &b;
    // Access the data pointed by "ptr2"
    cout << "b = " << b << ", *ptr2 = " << *ptr2 << endl;
    cout << endl;

    float p {22.5f}, q {25.15f};
    const float r {30.2f};
    // Constant Pointer to float data
    float *const ptr3 = &p;
    /*
    Constant pointer will point to the same variable once 
    initialized and can not be modified.
    Although the value it is pointing to can be changed
    */
    // ptr3 = &q;
    ++*ptr3;    // Increment the value ptr3 is pointing by 1
    cout << "p = " << p << ", *ptr3 = " << *ptr3 << endl;
    cout << endl;

    // Constant Pointer to Constant float data
    const float *const ptr4 = &r;
    /*
    Constant pointer to constant variable will be constant throughout 
    program. Neither pointer nor the value it is pointing to can
    be modified.
    */
   // ptr4 = &q;
   // ++*ptr4;
    cout << "r = " << r << ", *ptr4 = " << *ptr4 << endl;
    cout << endl;

    // Usage of "const" qualifier with Class Functions
    Demo d1;
    d1.display();       // display() function has "const" qualifier
    cout << endl;

    int u {55}, v {66};
    test_func(u, v);
    cout << "Original Parameters: u = " << u << ", v = " << v << endl;
    cout << endl;
     
    return 0;
}