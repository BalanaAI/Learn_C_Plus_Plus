/*********************************************************************
*                 Class Static Data Members & Functions 
* 
* A static data member belongs to the entire class, not to individual
* objects. This means all objects share the same single copy, making 
* it useful for storing common information like the total number of 
* objects. It is accessed using the class name and scope resolution 
* operator (ClassName::member), though objects can also access it.
* 
* A static member function also belongs to the class instead of any 
* object. It can access only static data members and other static 
* functions because it is not associated with a specific object. It is
* typically accessed using the class name with the scope resolution 
* operator (ClassName::function()), though objects can also access it.
**********************************************************************/
#include <iostream>

using namespace std;

class Test {
    public:
        int a;
        static int count;

        // No Arguments Constructor
        Test() {
            a = 12;
            count++;
        }

        // Static Member Function
        static int getCount() {
            /* Non-static data members cannot be accessed inside static
            member function */
            // a++;

            return count;
        }
};

int Test::count = 0;

int main() {
    // Instantiate Test Class
    Test t1, t2;

    // Access Static Data Member using objects
    cout << "count = " << t1.count << endl;
    cout << "count = " << t2.count << endl;
    
    // Access Static Data Member using Class
    cout << "count = " << Test::count << endl;
    cout << endl;

    // Modify Class Static Data Member
    Test::count = 35;

    // Access Class Static Member Function using Objects
    cout << "count = " << t1.getCount() << endl;
    cout << "count = " << t2.getCount() << endl;

    // Access Static Member Function using Class
    cout << "count = " << Test::getCount() << endl;
    
    return 0;
}