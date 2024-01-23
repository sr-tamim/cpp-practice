/*
1. Overload a function `multiply` to work with both two integers and two doubles.
*/

#include <iostream>
using namespace std;

int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

int main() {
    int a, b;
    double c, d;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Product of " << a << " and " << b << " is " << multiply(a, b) << endl;
    cout << "Enter two doubles: ";
    cin >> c >> d;
    cout << "Product of " << c << " and " << d << " is " << multiply(c, d) << endl;
    return 0;
}