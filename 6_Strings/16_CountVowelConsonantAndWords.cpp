/*******************************************************************  
*       Count the Vowels, Consonant and Words in a String
* 
* Write a program that checks the number of vowels, consonants, and
* words in a string.
********************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1 {"How many words"};
    int vowels {}, consonants {}, words {}; // All initialized with zero

    for(int i=0; s1[i] != '\0'; i++) {
        switch(s1[i]) {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                vowels++;
                break;
            case ' ':
                words++;
                break;
            default:
                consonants++;   
        }
    }
    cout << "words = " << words+1 << ", vowels = " << vowels;
    cout << ", consonants = " << consonants << endl;    
    return 0;
}