#include <iostream>

using namespace std;

int main() {
    float radius, area;

    cout << "Enter the radius of a circle: ";
    cin >> radius;

    area = 3.1425f * radius * radius;
    // area = 22 / 7 * radius * radius;
    // area = (float)22 / 7  * radius * radius;
    // area = 22 / 7.0 * radius * radius;
    cout << "Area of circle = " << area << endl;
    return 0;
}