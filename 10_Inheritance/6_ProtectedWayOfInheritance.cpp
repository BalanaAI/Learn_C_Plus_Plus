/********************************************************************
*            Ways of Inheritance: Inheriting Protectedly
* 
* If a child class is inheriting protectedly, then all the members of
* a parent class become protected in child class and are accessible 
* except private members. Also, if the grandchild is inheriting 
* publicly from child class then the grandchild can access all the 
* members except the private member that is coming from grandparent 
* class.
*********************************************************************/
#include <iostream>

using namespace std;

class Parent {
    private:
        int a;
    protected:
        int b;
    public:
        int c;
        void funcParent() {
            a = 10;
            b = 5;
            c = 16;
        }
};


class Child: protected Parent {
    public:
        void funcChild() {
            // Parent Class private members are not accessible in Child Class
            // a = 10;
            b = 5;
            c = 20;
        }
};


class GrandChild: public Child {
    public:
        void funcGrandChild() {
            // private members are only accessible within class
            // a = 10;
            b = 5;
            c = 16;
        } 
};


int main() {
    // Create a Child Class Object
    Child c1;
    GrandChild g1;

    /* Since Child Class inherited protectedly, so all members are now
    protected and can't be accessed outside class */
    // c1.a = 23;
    // c1.b = 44;
    // c1.c = 20;

    // g1.c = 45;

    return 0;
}