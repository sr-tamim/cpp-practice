#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {3, 8, 12, 9, 44};
    int arrLength = sizeof(arr) / sizeof(arr[0]);
    cout << "Current arr = ";
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << ", ";

    int maxShift = 1;
    cout << endl << "How many times you want to Right shift the array? ";
    cin >> maxShift;

    if (maxShift > arrLength)
    {
        cout << "Shifting value exceeded the array length!";
        return 1;
    }

    for (int i = arrLength - 1; i >= 0; i--)
        arr[i] = (i < maxShift) ? 0 : arr[i - maxShift];

    cout << endl << "Right shifted arr = ";
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << ", ";
    cout << endl;
    return 0;
}
