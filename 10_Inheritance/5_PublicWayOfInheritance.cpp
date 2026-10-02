/********************************************************************
*              Ways of Inheritance: Inheriting publicly
* 
* If a child class is inheriting publicly, then all the members of a
* parent class are as it is taken in child class and are accessible 
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


class Child: public Parent {
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

    // Child Class Object can access only "public" members 
    // c1.a = 23;
    // c1.b = 44;
    c1.c = 20;

    return 0;
}