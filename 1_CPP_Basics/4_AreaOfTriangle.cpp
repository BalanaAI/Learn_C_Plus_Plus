#include <iostream>

using namespace std;

int main() {
    float base, height, area;

    cout << "Enter triangle base and height (separated by space): ";
    cin >> base >> height;
    area = base * height / 2;
    cout << "Triangle area = " << area << endl;
    return 0;
}