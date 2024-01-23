/*
2. Create a while loop that finds the greatest common divisor (GCD) of two numbers.
*/

#include <iostream>
using namespace std;

int main() {
    int a, b, gcd;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    gcd = a;
    cout << "GCD of " << a << " and " << b << " is " << gcd << endl;
    return 0;
}