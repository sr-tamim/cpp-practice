#include<iostream>
using namespace std;

// right shift an array by n times
void arrShiftRight(int arr[], int arrSize, int k)
{
    for (int i = arrSize - 1; i >= 0; i--)
        arr[i] = (i < k) ? 0 : arr[i - k];
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
    cout << endl << "How many times you want to Right shift the array? ";
    cin >> maxShift;

    if (maxShift > arrSize)
    {
        cout << "Shifting value exceeded the array length!";
        return 1;
    }

    arrShiftRight(arr, arrSize, maxShift);

    cout << endl << "Right shifted arr = ";
    printArray(arr, arrSize);
    return 0;
}
