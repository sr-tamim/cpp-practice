/*
2. Create a structure named `Point` with `x` and `y` coordinates and write a function to print points.
*/

#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

void printPoint(Point p) {
    cout << "(" << p.x << ", " << p.y << ")" << endl;
}

int main() {
    Point p;
    // take input (x and y)
    cout << "Enter x: ";
    cin >> p.x;
    cout << "Enter y: ";
    cin >> p.y;
    // print point
    printPoint(p);
    return 0;
}