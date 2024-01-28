#include<iostream>
using namespace std;

// Right rotate an array by n times
void arrRotateRight(int arr[], int arrSize, int n)
{
    int temp[n];
    // right shift the array
    for (int i = arrSize - 1; i >= 0; i--)
    {
        if (i >= arrSize - n)
            temp[i - arrSize + n] = arr[i];
        arr[i] = (i < n) ? temp[i] : arr[i - n];
    }
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

    int maxRotate = 1;
    cout << endl << "How many times you want to Right rotate the array? ";
    cin >> maxRotate;

    if (maxRotate > arrSize)
    {
        cout << "Rotating value exceeded the array length!";
        return 1;
    }

    arrRotateRight(arr, arrSize, maxRotate);

    cout << endl << "Right rotated arr = ";
    printArray(arr, arrSize);
    return 0;
}