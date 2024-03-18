#include <iostream>
using namespace std;

// function to sort the array
void sortArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// function to search for a key in an array (linear search)
int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

// Function to search for a key in an array (binary search)
int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

// function to search for a key in an array (binary search using recursion)
int binarySearchRec(int arr[], int s, int e, int key)
{
    if (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            return binarySearchRec(arr, s, mid - 1, key);
        }
        else
        {
            return binarySearchRec(arr, mid + 1, e, key);
        }
    }
    return -1;
}

int main()
{
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;
    cout << "Enter the elements of the array: ";
    cout << "(press enter after entering each element)" << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    int key;
    cout << endl
         << "Enter the key to be searched: ";
    cin >> key;

    cout << "The index of the key is: (using linear search) ";
    cout << linearSearch(arr, n, key) << endl;

    sortArray(arr, n);
    cout << endl
         << "The sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << "The index of the key is: (using binary search) ";
    cout << binarySearch(arr, n, key) << endl;

    cout << endl
         << "The index of the key is: (using binary search using recursion) ";
    cout << binarySearchRec(arr, 0, n, key) << endl;
    return 0;
}