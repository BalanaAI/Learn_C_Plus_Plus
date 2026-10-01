/*********************************************************************
*                        Static Variables
* 
* Static variables are the variables which remains in the memory 
* throughout a program like a global Variable. They are created only
* one time in the code section of the program and remains there 
* throughout program execution. 
* 
* The difference between global and static variables is that global 
* variables can be accessed in any function, while static variables 
* are accessible only inside the function in which they are declared.
* So whenever you think of a static variable imagine that they are 
* global, but their scope visibility is limited to a function.
*  
* Static variables are declared inside a function with the keyword
* "static". These are more useful in modular or procedural 
* programming, where everything is done in the form of functions.
**********************************************************************/
#include <iostream>

using namespace std;

void static_func() {
    // Static variable
    static int v {0};
    int a {5};

    v++;
    cout << "Local variable a = " << a << endl;
    cout << "Static variable v = " << v << endl;
}

int main() {
    static_func();
    cout << endl;
    static_func();
    cout << endl;
    static_func();
    return 0;
}