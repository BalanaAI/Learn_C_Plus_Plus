/*********************************************************************
*                       Friend Class of Class
* 
* A friend class is an entire class that is granted access to the 
* private and protected members of another class. You can think of 
* it as giving all members of one class a VIP pass to another class's
* private information.
* Note that the friend class can access the private and protected data
* members using the object of that class only not directly.
**********************************************************************/
#include <iostream>
#include <string>

using namespace std;

// Declaration of Class Your is required before its use
class Your;

class My {
    private:
        int id_card {3144};
    protected:
        string name {"John"};
    public:
        int age {32};

        // Specify Friend Class
        friend Your;
};


class Your {
    public:
        // Create an Object of My Class
        My m1;

        void my_data() {
            // Access private & protected members of m1 Object
            cout << "My ID Card = " << m1.id_card << endl;
            cout  << "My name = " << m1.name << endl;
            cout << "My age = " << m1.age << endl;
        }
};


int main() {
    // Instantiate Your Class
    Your y1;
    
    // Accessing My Class Data using Your Class Object
    y1.my_data();

    return 0;
}