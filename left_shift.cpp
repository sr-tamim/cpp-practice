#include<iostream>
using namespace std;

// left shift an array by k times
void arrShiftLeft(int arr[], int arrSize, int k)
{
    for (int i = 0; i < arrSize; i++)
        arr[i] = (i >= arrSize - k) ? 0 : arr[i + k];
}

// print array
void printArray(int arr[], int arrSize)
{
    for (int i = 0; i < arrSize; i++)
        cout << arr[i] << (i == arrSize - 1 ? "\n" : ", ");
}

int main()
{
    int arrSize;
    cout << "Enter array size: ";
    cin >> arrSize;

    int arr[arrSize];
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < arrSize; i++)
        cin >> arr[i];

    cout << "Current arr = ";
    printArray(arr, arrSize);

    int maxShift = 1;
    cout << endl << "How many times you want to Left shift the array? ";
    cin >> maxShift;

    if (maxShift > arrSize)
    {
        cout << "Shifting value exceeded the array length!";
        return 1;
    }

    arrShiftLeft(arr, arrSize, maxShift);

    cout << endl << "Left shifted arr = ";
    printArray(arr, arrSize);
    return 0;
}
