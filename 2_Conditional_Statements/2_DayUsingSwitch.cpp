/******************************************************************
* Switch statement has the advantage of going directly to the
* desired case instead of checkng every case from top to bottom
* like an if-else statement.
* Also, the "default" case in Switch statement is optional and can
* be written anywhere inside the Switch statement.
* 
* Also note that the absence of break statement after case will 
* cause fall-thru. Fall-thru means executing next case also.
* 
* Another thing to note is that only integer and character data
* types are allowed in Switch cases.
* 
* Write a program that displays day name using the value of day
* number from the user using Switch Statement.
*******************************************************************/

#include <iostream>

using namespace std;

int main() {
    int day;

    cout << "Enter the day number: ";
    cin >> day;

    switch (day)
    {
    // default case can be written at the beginning also
    // default:
    //     cout << "Invalid Day Number" << endl;
    //     break;
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    // default case can be written in the middle
    // default:
    //     cout << "Invalid Day Number" << endl;
    //     break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    // But logically default case can be written at the end
    default:
        cout << "Invalid Day Number" << endl;
        break;
    }

    return 0;
}