/*****************************************************************
*                       C++ Namespaces
* A namespace in C++ is a container that groups related 
* identifiers such as variables, functions, and classes under a 
* unique name. It helps avoid name conflicts when different parts
* of a program or libraries use the same identifier names. By using
* namespaces, code becomes more organized, readable, and easier to 
* manage.
* A namespace is a logical container, not a physical one.
******************************************************************/
#include <iostream>

using namespace std;

// Define namespace First
namespace First {
    void func() {
        cout << "First" << endl;
    }
};

// Define namespace Second
namespace Second {
    void func() {
        cout << "Second" << endl;
    }
};

using namespace First;

int main() {
    func();
    Second::func();

    return 0;
}