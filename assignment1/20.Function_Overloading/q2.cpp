/*
2. Create an overloaded function `area` that calculates the area of a rectangle and a circle.
*/

#include <iostream>
using namespace std;

double area(double width, double height) {
    return width * height;
}

double area(double radius) {
    return 3.14 * radius * radius;
}

int main() {
    double rectWidth, rectHeight, radius;

    cout << "Enter width and height of rectangle: ";
    cin >> rectWidth >> rectHeight;
    cout << "Area of rectangle with width " << rectWidth << " and height " << rectHeight << " is " << area(rectWidth, rectHeight) << endl;

    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of circle with radius " << radius << " is " << area(radius) << endl;
    return 0;
}