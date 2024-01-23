/*
2. Create a program that compares two numbers and prints which one is bigger or if they are equal.
*/

#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    if (num1 > num2) {
        cout << num1 << " is bigger than " << num2 << endl;
    } else if (num1 < num2) {
        cout << num2 << " is bigger than " << num1 << endl;
    } else {
        cout << num1 << " and " << num2 << " are equal" << endl;
    }

    return 0;
}