/********************************************************************
*                     Calculate Net Salary
* 
* Write a program to calculate Net Salary. The formula for 
* calculating Net Salary is given below:
* NetSalary = Basic_Salary + Basic_Salary * Percentage of Allowances
            - Basic_Salary * Percentage of Deductions
**********************************************************************/

#include <iostream>

using namespace std;

int main() {
    float basic_sal, per_of_allowances, per_of_deductions;
    double net_sal;

    cout << "Enter Basic Salary: ";
    cin >> basic_sal;
    cout << "Enter percent of Allowances: ";
    cin >> per_of_allowances;
    cout << "Enter percent of Deductions: ";
    cin >> per_of_deductions;

    net_sal = basic_sal + basic_sal * (per_of_allowances/100) - 
              basic_sal * (per_of_deductions/100);
    cout << "Net Salary is " << net_sal << endl;

    return 0;
}