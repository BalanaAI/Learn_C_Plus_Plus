/**************************************************************
*                      Student Class
* 
* Write the program using a class for students containing 
* following data members:
* - Roll number,
* - Name and
* - Marks of 3 subjects
* - Also the functions you have to write down is to calculate
*   total marks and generate the grade depending on the 
*   percentages. Like if the percentage are less than 40 it's a
*   C-grade, between 40 to 60 it is B-grade, and if it's is 
*   greater than 60 percent it's A grade. And if any more 
*   methods require like constructor's if you require you can
*   write them.
* 
***************************************************************/
#include<iostream>
#include<string>

using namespace std;

class Student {
    private:
        // Class Data Members
        int roll;
        string name;
        int mathMarks;
        int phyMarks;
        int chemMarks;
    
    public:
        // Parameterized Constructor
        Student(int roll, string name, int mathMarks, int phyMarks, int chemMarks);
        // Class Facilitators
        int total_marks();
        char grade();
};


int main() {
    int roll, math, phy, chem;
    string name;
    
    cout << "Enter Roll number of a student: ";
    cin >> roll;
    cin.ignore();
    cout << "Enter Name of a student: ";
    getline(cin, name);
    cout << "Enter marks in 3 subjects(separated by space): ";
    cin >> math >> phy >> chem;
    
    // Create a Student Object
    Student s1(roll, name, math, phy, chem);

    // Determine total marks of student
    cout << "Total marks: " << s1.total_marks() << endl;
    cout << "Grade of student: " << s1.grade();

    return 0;
}


// Student Parameterized Constructor
Student::Student(int roll, string name, int mathMarks, int phyMarks, int chemMarks) {
    this->roll = roll;
    this->name = name;
    this->mathMarks = mathMarks;
    this->phyMarks = phyMarks;
    this->chemMarks = chemMarks;
}
        
// Class Facilitators
int Student::total_marks() {
    return mathMarks + phyMarks + chemMarks;
}

char Student::grade() {
    float average = total_marks() / 300.0 * 100;
    if(average >= 60)
        return 'A';
    else if(average >= 40 && average < 60)
        return 'B';
    else
        return 'C';
}