/*
2. Create a function that takes two float parameters (base and height) and calculates the area of a triangle.
*/

#include <iostream>
using namespace std;

double areaOfTriangle(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    double base, height;
    cout << "Enter base and height: ";
    cin >> base >> height;
    cout << "Area of triangle with base " << base << " and height " << height << " is " << areaOfTriangle(base, height) << endl;
    return 0;
}