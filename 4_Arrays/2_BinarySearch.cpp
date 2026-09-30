/***************************************************************
*                       Binary Search                       

* Note Binary Search is performed only on sorted data. So write
* a program that has a sorted array and ask the user to enter
* a Key to search in the sorted array. Then using Binary Search,
* check the array for Key. If found then display the position in
* the array, else display the message not found.
****************************************************************/

#include <iostream>

using namespace std;

int main () {
    int A[] {6, 8, 13, 17, 20, 22, 25, 28, 30, 35};
    int key, low {0}, high {9}, mid;
    cout << "Enter Key to search for: ";
    cin >> key;

    while(low <= high) {
        // Middle is a floor value, i.e., decimal is truncated
        mid = (low + high) / 2;
        if(A[mid] == key) {
            cout << key << " found at position " << mid << endl;
            return 0;
        }
        // If Key is small, check on the left side & modify high
        else if(key < A[mid])
            high = mid - 1;
        // If key is greater, check on the right side & modify low
        else
            low = mid + 1;
    }
    cout << "Sorry, " << key << " not found!" << endl;
    return 0;
}