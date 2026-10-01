/****************************************************************
*                      String Functions
* 
* For C-style string (Character Arrays), we need to include the
* "cstring" header file. The "cstring" header file contains the 
* declaration of C-style string functions.
* 
* For C++ style string (string class) we need to include the 
* "string" header file. The "string" header file contains the 
* declaration of C++ style string functions.
*****************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s1[10] {"Hello"};
    char *s2;

    cout << "Enter your favorite proverb: ";
    cin.getline(s2, 100);

    cout << "Length of s1 = " << strlen(s1) << endl;
    cout << "Length of s2 = " << strlen(s2) << endl;

    // String Concatenation using "strcat" and "strncat"
    char s3[50] {"Good"};
    char s4[50] {"Morning"};

    strcat(s3, s4);     // Concatenate s4 at the end of s3 and assign to s3
    cout << "\ns3 = " << s3 << endl;
    cout << "s4 = " << s4 << endl;

    char s5[50] = "Good";
    char s6[50] = "Morning";
    // Concatenate 4 characters of s6 at the end of s5 and assign to s5
    strncat(s5, s6, 4);
    cout << "\ns5 = " << s5 << endl;
    cout << "s6 = " << s6 << endl;

    // Copy one string to another string
    char s7[] = "Happy";
    char s8[50] {};
    char s9[25] {};

    // Copy s7 into s8 using "strcpy(dest, source)"
    strcpy(s8, s7);
    // Copy first 2 alphabets of s7 into s9 using "strncpy(dest, source, n_char)"
    strncpy(s9, s7, 2);
    cout << "\ns7 = " << s7 << endl;
    cout << "s8 = " << s8 << endl;
    cout << "s9 = " << s9 << endl;

    return 0;
}