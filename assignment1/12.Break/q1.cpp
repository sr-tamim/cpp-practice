/*
1. Write a program that keeps asking the user for a number until they enter -1, then stops.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    while (true) {
        cout << "Enter a number: ";
        cin >> n;
        if (n == -1) {
            break;
        }
    }
    return 0;
}