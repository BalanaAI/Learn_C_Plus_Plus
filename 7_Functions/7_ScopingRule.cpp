/******************************************************************
*                         Scoping Rule
* 
* C++ has block level scope. It means that first it look for a 
* variable inside a block. If it found then ok, otherwise it look
* in the enclosing block. If the enclosing block has a variable 
* with that name then it is ok, otherwise it look in the global
* scope. So the C++ scoping rules are:
*   - First look in the local block
*   - Second look in the enclosing block, function, etc.
*   - At the end look in the global scope.
* 
* Note that if there is a variable with the same name in local and
* global scope and we wanted to access the global variable instead
* of local variable, then we have to use the scope reolution (::)
* operator.
* Also note that Global Variables are created in the code section 
* of the memory at loading time, before the execution of the
* program. And they should remain in the code section throughout
* the program.
*******************************************************************/
#include <iostream>

using namespace std;

// Global variable
int x = 255;

int main() {
    int x = 20;
    {
        int x = 45;
        cout << "Block level x = " << x << endl;
    }
    cout << "Local x = " << x << endl;
    cout << "Global x inside main() = " << ::x << endl;
}