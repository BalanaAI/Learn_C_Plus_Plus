/******************************************************************
*                   Enum and Typedef
* 
* Enum is used to define our own data type. Enum define a group 
* of constants under one name.
* 
* Typedef is used for defining of our own data type or giving an
* alias to some data type so that we can make the program more 
* readable.
* So the purpose of typedef is to make the program more readable.
*******************************************************************/

#include <iostream>

using namespace std;

// All these are like a set of constants defined under one name
enum day {mon, tue, wed, thu, fri, sat, sun};
// I can specify any values, by default it will start from zero
enum departments {CS=101, EE, CE, Phy=205, Bio, Chem};

// Define typedef
typedef int marks;

int main() {
    day d2 {tue}, d5 {fri}, d6;
    marks m1 {55}, m2 {73};
    
    // Following is invalid, we can assign it only values from Enum day
    // d6 = 6;

    cout << "d2 = " << d2 << endl;
    cout << "wed = " << wed << endl;
    cout << "d5 = " << d5 << endl;

    cout << "\nFollowing are our department values: " << endl;
    cout << "CS = " << CS << endl;
    cout << "EE = " << EE << endl;
    cout << "CE = " << CE << endl;
    cout << "Phy = " << Phy << endl;
    cout << "Bio = " << Bio << endl;
    cout << "Chem = " << Chem << endl;

    cout << "\nStudent marks are:" << endl;
    cout << m1 << endl << m2 << endl;
    
    return 0;
}