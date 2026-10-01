/*******************************************************************
*                   Substring and Compare
* 
* The "strstr(main_str, sub_str)" will check the main string for the
* occurrence of sub-string. If sub-string found in main, then it 
* returns the sub-string till the end of the string. Otherwise, it
* returns NULL.
* 
* The "strcmp(str1, str2)" function will compare two strings and 
* returns either, 0, -ve or +ve result.
* - If the two strings are equal then zero will be returned.
* - If the first string comes first in the dictionary, then -ve
*   result will be returned.
* - If the second string comes first in the dictionary, then +ve
*   result will be returned.
********************************************************************/
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s1[] {"Programming"};
    char s2[] {"gram"};
    char s3[] {"Kite"};

    // Find Substring in main string
    if(strstr(s1, s2) != NULL)
        cout << strstr(s1, s2) << endl; // Print "gramming"
    else
        cout << s2 << " Not Found" << endl;
    
    // Find substring in main string
    if(strstr(s1, s3) != NULL)
        cout << strstr(s1, s3) << endl; 
    else
        cout << s3 << " Not Found" << endl;     // Kite Not Found
    
    // Find a character in main string
    char ch = 'm';
    if(strchr(s1, ch) != NULL)
        cout << strchr(s1, ch) << endl; // Print "gramming"
    else
        cout << ch << " Not Found" << endl;
    
    // Find a character in main string
    ch = 'K';
    if(strchr(s1, ch) != NULL)
        cout << strchr(s1, ch) << endl; // Print "gramming"
    else
        cout << ch << " Not Found" << endl;
    
    // Find a character in the main string from right-hand side
    // using the "strrchr()" function
    ch = 'r';
    if(strrchr(s1, ch) != NULL)
        cout << strrchr(s1, ch) << endl; // Print "gramming"
    else
        cout << ch << " Not Found" << endl;
    
    // Compare two string using "strcmp(str1, str2)" function
    char s5[] {"Hello"};
    char s6[] {"Hello"};
    char s7[] {"minor"};
    char s8[] {"elder"};

    cout << "strcmp(s5, s6) = " << strcmp(s5, s6) << endl;
    cout << "strcmp(s5, s7) = " << strcmp(s5, s7) << endl;
    cout << "strcmp(s7, s8) = " << strcmp(s7, s8) << endl;
    return 0;
}