/*
Consider an array named source. Write a method/function named remove( source,
size, idx) that removes the element in index idx of the source array. You must execute
the method by passing an array, its size and the idx( that is the index of the element to
be removed). After calling the method, print the array to show whether the element of
that particular index has been removed properly.
Example:
source=[10,20,30,40,50,0,0]
remove(source,5,2)
After calling remove(source,5,2) , printing the array should give the output as:
[ 10,20,40,50,0,0,0]
*/

#include <iostream>
using namespace std;

void remove(int arr[], int size, int idx) {
    for (int i = idx; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = 0;    // set last element to 0
}

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int arr[size];
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];                    // input array
    }

    int idx;
    cout << "Enter index to remove: ";
    cin >> idx;

    // print array
    cout << endl << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    // remove element
    remove(arr, size, idx);

    // print array
    cout << "Array after removing element at index " << idx << ": ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    return 0;
}
