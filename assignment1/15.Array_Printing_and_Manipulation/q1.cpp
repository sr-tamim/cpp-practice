/*
1. Create an array of 6 integers, print them, reverse the array, then print it again.
*/

#include <iostream>
using namespace std;

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};

    // print the array
    cout << "Original array: ";
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // reverse the array
    for (int i = 0; i < 3; i++) {
        int temp = arr[i];
        arr[i] = arr[5 - i];
        arr[5 - i] = temp;
    }

    // print the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}