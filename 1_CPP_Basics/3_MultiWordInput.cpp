#include <iostream>
#include <string>

using namespace std;

int main() {
    string full_name;

    cout << "May I know your full-name (separated by spaces)? ";
    getline(cin, full_name);
    cout << "Welcome, " << full_name << endl;
    return 0;
}