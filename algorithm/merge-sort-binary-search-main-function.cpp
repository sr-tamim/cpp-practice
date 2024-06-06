#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << endl;
    cout << "Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << ", ";
    cout << endl;

    // Merge Sort
    for (int curr_size = 1; curr_size <= n - 1; curr_size = 2 * curr_size)
    {
        for (int left_start = 0; left_start < n - 1; left_start += 2 * curr_size)
        {
            int mid = min(left_start + curr_size - 1, n - 1);
            int right_end = min(left_start + 2 * curr_size - 1, n - 1);

            int n1 = mid - left_start + 1;
            int n2 = right_end - mid;
            int leftArray[n1], rightArray[n2];

            for (int i = 0; i < n1; i++)
                leftArray[i] = arr[left_start + i];
            for (int i = 0; i < n2; i++)
                rightArray[i] = arr[mid + 1 + i];

            int i = 0, j = 0, k = left_start;
            while (i < n1 && j < n2)
            {
                if (leftArray[i] <= rightArray[j])
                {
                    arr[k] = leftArray[i];
                    i++;
                }
                else
                {
                    arr[k] = rightArray[j];
                    j++;
                }
                k++;
            }

            while (i < n1)
            {
                arr[k] = leftArray[i];
                i++;
                k++;
            }

            while (j < n2)
            {
                arr[k] = rightArray[j];
                j++;
                k++;
            }
        }
    }

    cout << endl;
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << ", ";
    cout << endl;

    int x;
    cout << "Enter the number to search: ";
    cin >> x;

    // Binary Search
    int left = 0, right = n - 1;
    int result = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
        {
            result = mid;
            break;
        }
        if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
