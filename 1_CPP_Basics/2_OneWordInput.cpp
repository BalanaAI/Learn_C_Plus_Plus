/**************************************************************************
* Note:
* _____
* Some compiler's implementation of <iostream> happens to include the 
* declarations for std::string, but the C++ standard does not guarantee it. 
* You should still #include <string>.
***************************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    
    cout << "My I know your name please (One word only)? ";
    cin >> name;
    cout << "Welcome, " << name << endl;
    return 0;
}