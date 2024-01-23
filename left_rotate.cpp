#include<iostream>
using namespace std;

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
        cout << "Shifting value exceeded the array length!";
        return 1;
    }

    int temp[arrLength];
    // fill the temp array
    for (int i = 0; i < maxRotate; i++)
        temp[i] = arr[i];

    // left shift the array
    for (int i = 0; i < arrLength; i++)
    {
        if (i < maxRotate)
            temp[i] = arr[i];
        arr[i] = (i >= arrLength - maxRotate) ? temp[arrLength - i + maxRotate] : arr[i + maxRotate];
    }

    cout << endl << "Left shifted arr = ";
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << ", ";
    cout << endl;
    return 0;
}
