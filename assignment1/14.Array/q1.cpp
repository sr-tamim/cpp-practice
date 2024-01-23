/*
1. Create an array of 5 floating point numbers and print them using a loop.
*/

#include <iostream>
using namespace std;

int main() {
    float arr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}