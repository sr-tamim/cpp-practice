/*
Consider an array named source. Write a method/function named removeAll( source,
size, element) that removes all the occurrences of the given element in the source
array. You must execute the method by passing an array, its size and the element to be
removed. After calling the method, print the array to show whether all the occurrences
of the element have been removed properly.
Example:
source=[10,2,30,2,50,2,2,0,0]
removeAll(source,7,2)
After calling removeAll(source,7,2), all the occurrences of 2 must be removed. Printing
the array afterwards should give the output as:
[ 10,30,50,0,0,0,0,0,0]
*/

#include <iostream>
using namespace std;

void remove_all(int arr[], int size, int element) {
    int i = 0;
    while (i < size) {
        if (arr[i] == element) {
            for (int j = i; j < size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            arr[size - 1] = 0;    // set last element to 0
            size--;   // decrement size so that last element is not checked again
        } else {
            i++;
        }
    }
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

    int element;
    cout << "Enter element to remove: ";
    cin >> element;

    // print array
    cout << endl << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    // remove element
    remove_all(arr, size, element);

    // print array
    cout << "Array after removing " << element << ": ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    return 0;
}
