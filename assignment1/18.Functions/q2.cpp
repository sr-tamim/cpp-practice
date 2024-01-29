/*
2. Create a function that calculates and returns the area of a circle given its radius.
*/

#include <iostream>
using namespace std;

double areaOfCircle(double radius) {
    return 3.1416 * radius * radius;
}

int main() {
    double radius;
    cout << "Enter radius: ";
    cin >> radius;
    cout << "Area of circle with radius " << radius << " is " << areaOfCircle(radius) << endl;
    return 0;
}