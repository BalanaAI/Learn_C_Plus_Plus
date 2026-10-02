/************************************************************
*                     Employee Class
* 
* Write a class for Employee with derived classes of:
*   - Fulltime Employee with salary
*   - Part Time Employee with Daily Wages
* Also write the required methods for Employee, Fulltime 
* Employee, and Part Time Employee.
*************************************************************/
#include <iostream>
#include <string>

using namespace std;

class Employee {
    private:
        int eid;
        string name;
    
    public:
        // Parameterized Constructor
        Employee(int eid, string name) {
            this->eid = eid;
            this->name = name;
        }

        // Accessor
        int getEmployeeID() { return eid; }
        string getName() { return name; }
};


class FullTimeEmployee: public Employee {
    private:
        int salary;
    public:
        // Parameterized Constructor
        FullTimeEmployee(int eid, string name, int salary)
            :Employee(eid, name) {
                this->salary = salary;
            }
        
        // Accessor
        int getSalary() { return salary;}
};


class PartTimeEmployee: public Employee {
    private:
        int wage;
    public:
        // Parameterized Constructor
        PartTimeEmployee(int eid, string name, int wage)
            :Employee(eid, name) {
                this->wage = wage;
            }
        
        // Accessor
        int getWage() { return wage; }
};


int main() {
    PartTimeEmployee p1(101, "Gayle", 500);
    FullTimeEmployee f1(205, "Ajay", 2300);

    cout << "Daily wage of " << p1.getName() << " is " << p1.getWage() << endl;
    cout << "Salary of " << f1.getName() << " is " << f1.getSalary() << endl;
    
    return 0;
}