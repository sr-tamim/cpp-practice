#include <iostream>
using namespace std;

struct Element
{
    int value;
    int repetitions;
};

bool check_repetation(const int arr[], int size)
{
    Element elements[size];
    for (int i = 0; i < size; i++)
    {
        bool found = false;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == elements[j].value)
            {
                elements[j].repetitions++;
                found = true;
                break;
            }
        }
        if (!found)
        {
            elements[i].value = arr[i];
            elements[i].repetitions = 1;
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (elements[i].repetitions == 1)
            continue;
        for (int j = i + 1; j < size; j++)
        {
            if (elements[i].repetitions == elements[j].repetitions)
                return true;
        }
    }
    return false;
}

int main()
{
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int arr[size];

    cout << "Enter array elements: \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "\nArray: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n\n";

    if (check_repetation(arr, size))
    {
        cout << "True\n";
    }
    else
    {
        cout << "False\n";
    }

    return 0;
}