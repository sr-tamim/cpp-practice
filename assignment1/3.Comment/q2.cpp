/*
2. Write a program that calculates the area of a rectangle and use multi-line comments to describe the formula.
*/

#include <iostream>
using namespace std;

int main() {
    int length = 12;
    int width = 4;

    /*
    If the length and width of a rectangle are known, the area can be calculated using the formula:
        Area of a rectangle = length * width

    So, the area of a rectangle with length 12 and width 4 is:
        Area of a rectangle = 12 * 4 = 48
    */
    int area = length * width;
    cout << "The area of a rectangle with length " << length << " and width " << width << " is " << area << endl;
    return 0;
}