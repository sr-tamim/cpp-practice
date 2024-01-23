/*
1. Write a program that checks the age and height of a person to determine if they can ride a roller coaster.
*/

#include <iostream>

using namespace std;

int main() {
    int age;
    double height;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter height: ";
    cin >> height;

    if (age >= 12 && height >= 5) {
        cout << "You can ride the roller coaster" << endl;
    } else {
        cout << "You cannot ride the roller coaster" << endl;
    }

    return 0;
}