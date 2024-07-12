#include <iostream>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low, j = high;

    while (i < j)
    {
        do
        {
            i++;
        } while (arr[i] <= pivot);

        do
        {
            j--;
        } while (arr[j] > pivot);

        if (i < j)
            swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot);
        quickSort(arr, pivot + 1, high);
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    n++;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 1; i < n; i++)
        cin >> arr[i];

    quickSort(arr, 1, n);

    cout << "Sorted array: ";
    for (int i = 1; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}