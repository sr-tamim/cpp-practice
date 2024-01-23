/*
2. Create a for loop that prints numbers from 1 to 10, but stops when it reaches 6.
*/

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 6) {
            break;
        }
        cout << i << endl;
    }
    return 0;
}