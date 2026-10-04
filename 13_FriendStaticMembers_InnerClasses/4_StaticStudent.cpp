/**************************************************************
*           Student Class with Static Data Members
***************************************************************/
#include <iostream>
#include <string>

using namespace std;

class Student {
    public:
        int roll;
        string name;
        // Static Data Member Declaration
        static int addNo;   // Static Addmission Number

        // Parameterized Constructor
        Student(string name) {
            this->name = name;
            ++addNo;
            roll = addNo;
        }

        void display() {
            cout << "Student name is " << name << endl;
            cout << "Student Roll Number is " << roll << endl;
        }
};

// Static Data Member Definition
int Student::addNo;

int main() {
    Student s1("Mike"), s2("Milinda"), s3("Andrej");

    s1.display();
    cout << endl;
    s2.display();
    cout << endl;
    s3.display();
    cout << endl;

    cout << "Number of Students admitted = " << Student::addNo << endl;

    return 0;
}