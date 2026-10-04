/*********************************************************************
*                      Class Friend Function
* 
* A friend function is a normal function that is given special 
* permission to access the private and protected data of a class, 
* even though it is not a member of that class. Think of it as a 
* trusted outsider.
*
**********************************************************************/
#include<iostream>

using namespace std;

class Base {
    private:
        int x;
    protected:
        int y;
    public:
        int z;
        // Specify Prototype of Class Friend Function
        friend void outsider_func();
};

// Friend Function
void outsider_func() {
    // Create an Object of Base Class
    Base b;

    /* Friend function can access private, protected & public
    class members using Object of that Class */
    b.x = 10;
    b.y = 15;
    b.z = 31;

    cout << "x of Object b = " << b.x << endl;
    cout << "y of Object b = " << b.y << endl;
    cout << "z of Object b = " << b.z << endl;
}

int main() {
    outsider_func();
    return 0;
}