/*
2. Create a pointer for an array and use it to print all elements of the array.
*/

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *pointArr = arr;
    for (int i = 0; i < 5; i++) {
        cout << *(pointArr + i) << endl;
    }
    return 0;
}