/*
1. Write a program that takes two strings, `city` and `country`, and concatenates them into a single string `location`.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string city, country, location;

    cout << "Enter city: ";
    getline(cin, city);

    cout << "Enter country: ";
    getline(cin, country);

    location = city + ", " + country;

    cout << "Location: " << location << endl;

    return 0;
}