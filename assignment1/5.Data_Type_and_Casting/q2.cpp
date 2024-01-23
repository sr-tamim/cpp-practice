/*
2. Create a double variable with a fractional part and cast it to an int, displaying the original and casted values.
*/

#include <iostream>
using namespace std;

int main() {
    double d = 3.14;
    int i = (int) d;
    cout << "d: " << d << endl;
    cout << "i: " << i << endl;
    return 0;
}