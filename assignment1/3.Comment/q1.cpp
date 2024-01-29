/*
1. Write a program that adds two numbers and use single-line comments to explain each step.
*/

#include <iostream>
using namespace std;

int main() {
    int a = 12; // This is the first number
    int b = 4;  // This is the second number
    int sum = a + b;    // This is the sum of the two numbers

    // Print the sum
    cout << "The sum of " << a << " and " << b << " is " << sum << endl;

    // Return 0 to indicate that the program has run successfully
    return 0;
}