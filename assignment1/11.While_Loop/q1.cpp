/*
1. Write a program that calculates the factorial of a number using a while loop.
*/

#include <iostream>
using namespace std;

int main() {
    int n, i = 1, fact = 1;
    cout << "Enter a number: ";
    cin >> n;
    while (i <= n) {
        fact *= i;
        i++;
    }
    cout << "Factorial of " << n << " is " << fact << endl;
    return 0;
}