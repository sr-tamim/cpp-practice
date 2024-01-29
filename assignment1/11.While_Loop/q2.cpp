/*
2. Create a while loop that finds the greatest common divisor (GCD) of two numbers.
*/

#include <iostream>
using namespace std;

int main() {
    int a, b, gcd;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int x = a, y = b;
    while (x % y != 0) {
        int temp = x;
        x = y;
        y = temp % y;
    }
    gcd = y;
    cout << "GCD of " << a << " and " << b << " is " << gcd << endl;
    return 0;
}