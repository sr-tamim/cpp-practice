/*
2. Write a program that initializes an array with the first 10 even numbers and prints them.
*/

#include <iostream>
using namespace std;

int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = (i + 1) * 2;
    }
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}