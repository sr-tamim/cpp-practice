#include<iostream>
using namespace std;

// Left rotate an array by n times
void arrRotateLeft(int arr[], int arrLength, int n)
{
    int temp[n];
    // left shift the array
    for (int i = 0; i < arrLength; i++)
    {
        if (i < n)
            temp[i] = arr[i];
        arr[i] = (i >= arrLength - n) ? temp[i - arrLength + n] : arr[i + n];
    }
}

int main()
{
    int arr[5] = {4, 8, 12, 9, 1};
    int arrLength = sizeof(arr) / sizeof(arr[0]);
    cout << "Current arr = ";
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << ", ";

    int maxRotate = 1;
    cout << endl << "How many times you want to Left rotate the array? ";
    cin >> maxRotate;

    if (maxRotate > arrLength)
    {
        cout << "Rotating value exceeded the array length!";
        return 1;
    }

    arrRotateLeft(arr, arrLength, maxRotate);

    cout << endl << "Left rotated arr = ";
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << ", ";
    cout << endl;
    return 0;
}
