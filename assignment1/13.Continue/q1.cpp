/*
1. Write a for loop that prints all numbers from 1 to 10 except 4 and 7.
*/

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 4 || i == 7) {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}