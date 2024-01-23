/*
1. Define a structure named `Rectangle` with width and height as its properties and write a program to create an instance of it and print its properties.
*/

#include <iostream>
using namespace std;

struct Rectangle {
    int width;
    int height;
};

int main() {
    Rectangle r;
    // take input (width and height)
    cout << "Enter width: ";
    cin >> r.width;
    cout << "Enter height: ";
    cin >> r.height;
    // print width and height
    cout << "Width: " << r.width << endl;
    cout << "Height: " << r.height << endl;
    return 0;
}