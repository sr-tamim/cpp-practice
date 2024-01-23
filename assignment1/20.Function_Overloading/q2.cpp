/*
2. Create an overloaded function `area` that calculates the area of a rectangle and a circle.
*/

#include <iostream>
using namespace std;

double area(double length, double breadth) {
    return length * breadth;
}

double area(double radius) {
    return 3.14 * radius * radius;
}

int main() {
    double length, breadth, radius;
    cout << "Enter length and breadth: ";
    cin >> length >> breadth;
    cout << "Area of rectangle with length " << length << " and breadth " << breadth << " is " << area(length, breadth) << endl;
    cout << "Enter radius: ";
    cin >> radius;
    cout << "Area of circle with radius " << radius << " is " << area(radius) << endl;
    return 0;
}